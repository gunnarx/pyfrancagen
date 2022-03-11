#!/usr/bin/python
# (C) 2017 Gunnar Andersson
# SPDX-License-Identifier: MPL-2.0

# -*- coding: utf-8 -*-
# vim: tw = 0
# vim: set fileencoding = utf-8

"""
Generate stuff from Franca IDL based on templates
"""

import sys
import os
import time
from itertools import *

# call, POpen, ...
from subprocess import *

# Instead of relying on installed pyfranca, assume it is stored in parallel
# with this project or inside the project dir:
sys.path.append(os.getcwd() + "/pyfranca")
sys.path.append(os.getcwd() + "/../pyfranca")

# Same for jinja2 if it's not installed
sys.path.append(os.getcwd() + "/../jinja")

from pyfranca import Processor, LexerException, ParserException, \
    ProcessorException, ast
from pyfranca.ast import Array
from jinja2 import Environment, Template, PackageLoader, BaseLoader, TemplateNotFound

# From jinja2 docs
class MyLoader(BaseLoader):

    def __init__(self, prioritydir, defaultdir, relpath):
        self.relpath = relpath
        self.prioritydir = prioritydir  # Use file from here, if it exists
        self.defaultdir = defaultdir    # else from here.

    def get_source(self, environment, template):
        path = self.get_file_location(template)

        if not os.path.exists(path):
            raise TemplateNotFound(template)

        mtime = os.path.getmtime(path)
        with file(path) as f:
            source = f.read().decode('utf-8')
        return source, path, lambda: mtime == os.path.getmtime(path)

    def get_file_location(self, name):
        preferred = os.path.abspath(os.path.join(self.prioritydir, self.relpath, name))
        fallback = os.path.abspath(os.path.join(self.defaultdir, self.relpath, name))

        if os.path.exists(preferred):
            path = preferred
        else:
            path = fallback
        return path

# -------------------------------------------------------------------
# Setting up...
# Constants and other global values

RELATIVE_OUTPUT_DIR = 'src_gen'

# The starting directory (assumed to be == the script directory for now)
workingdir = os.getcwd()
basedir = os.path.dirname(os.path.realpath(__file__))
output_dir = workingdir + "/" + RELATIVE_OUTPUT_DIR

# Where to find templates
env = Environment(
    loader = MyLoader(workingdir,  # preferred/override location
                      basedir,      # fallback/default location
                      'templates') # relative path
)

# ---------------------------------------------------------------

def log(*kwargs):
    print ", ".join(kwargs)
    pass

def clang_format(file):
    call(['clang-format', '-i', file])

def boilerplate_from_file():
    path = env.loader.get_file_location('boilerplate.txt')
    return open(path, 'r').read()

# ---------------------------------------------------------------
# Type definitions generation
#
# There's a fair amount of code here simply because types need to be
# generated in the order they are referenced in the C/C++ program or there
# will be a compile error.  (The order is not guaranteed from the way the
# generation is set up, since it generates one type of object at a time -
# e.g. first all structs, then all unions, then all arrays, etc.)
#
# We also dedup since the same type might turn up more than once but must
# be output only once.
# ---------------------------------------------------------------

# Here we use a combination of a Set for existence, and an array for ordered
# storage. An OrderedDict / OrderdSet could be an alternative but swapping
# elements seemed messier there than in a plain array.

is_rendered = set()
rendered_types_ordered = []
reference_pairs = set()
rendered_types_index = {}

# Does a reference b?
def a_reference_to_b(a,b):
    return (a,b) in reference_pairs

def type_reference(a,b):
    # Used as a Set - the pair exists or not
    reference_pairs.add((a,b))

def store_rendered_type(name, text):
    # Because of files including files (including files...) there can be
    # rendered duplicates and we make sure to avoid that.
    if name not in is_rendered:
        is_rendered.add(name)
        rendered_types_ordered.append((name, text))

# Empty all data structures
def reset_rendered_types():
    reference_pairs.clear()
    is_rendered.clear()
    rendered_types_ordered[:] = []
    rendered_types_index.clear()

def process_file(file):

    # Relative path includes seem to only work if we're in the right
    # working dirctory also for the file:
    d = os.path.dirname(file)
    f = os.path.basename(file)
    os.chdir(d)

    file = open(f,"r")
    s = file.read().replace('\r\n', '\n') # Need to get rid of Windows linefeeds
    fidl_text = s.replace('^version', 'interfaceversion')      # FIXME, dirty fix of ^ escape character

    #dump_contents(f, s)
    process_fidl(f, fidl_text)
    os.chdir(workingdir)

def process_fidl(name, fidl_text):
    processor = Processor()
    try:
        processor.import_string(name, fidl_text)
    except (LexerException, ParserException, ProcessorException) as e:
        print("ERROR: {}".format(e))

    template = "classheader.tpl"
    template_render_plain_file(processor, ['interfaces'], template, ".h")

    template = "class.tpl"
    template_render_plain_file(processor, ['interfaces'], template, ".cpp")

    render_typedef_file(processor, ['interfaces', 'typecollections'], ".types.h")

def clean(file):
    # Some needed cleanup (smarter templates might avoid this)
    f = open(file,'r')
    s = f.read()
    s = s.replace('){',')\n{')
    s = s.replace(',)',')')
    f.close()
    open(file, 'w').write(s)

# TODO - maybe check that result is not empty before writing file
def write_result_file(result, name, suffix):
    outfile = output_dir + "/" + name + suffix
    f = open(outfile, 'w')
    f.write(result)
    f.close()
    # clean up result
    clang_format(outfile)
    clean(outfile)
    print "Wrote file: {}".format(outfile)

# ----- Rendering helpers -----
# These functions take some of the logic out of the rendering templates which
# would otherwise be a little messy.

# Arrays are complex types and can't be rendered like normal ones The AST
# requires us to extract the inner *referenced* type.name rather than usually
# simply the name of the type.
def is_array(x):
    return type(x) is ast.Array

def render_type(x):
    if is_array(x.type):
        return"std::vector<{}>".format(x.type.type.name)
    else:
        return x.type.name

# Enumerators also require a bit of logic since they can have a value
# (equal sign) or not.
def render_enumerator(eo):
    if eo.value != None:
        return "{} = {},\n".format(eo.name, eo.value)
    else:
        return "{},\n".format(eo.name)

def template_render_complex_types(package, item, imports):
    name = item.name
    types = item.structs  # FIXME not needed
    result = ""

    timestamp = time.strftime("%Y-%m-%d, %H:%M:%d")

    # Store the type reference hierarchy
    for s in item.structs.values():
        for f in s.fields.values():
            if is_array(f.type):
                # The relevant reference is to the inner type (elements of array)
                type_reference(s.name, f.type.type.name)
            else:
                type_reference(s.name, f.type.name)

        tpl = env.get_template('struct.tpl')
        r  = tpl.render(item = s, render_type = render_type)
        store_rendered_type(s.name, r)

    for u in item.unions.values():
        for f in u.fields.values():
            if is_array(f.type):
                # The relevant reference is to the inner type (elements of array)
                type_reference(u.name, f.type.type.name)
            else:
                type_reference(u.name, f.type.name)

        tpl = env.get_template('union.tpl')
        r  = tpl.render(item = u, render_type = render_type)
        store_rendered_type(u.name, r)

    for e in item.enumerations.values():
        for x in e.enumerators.values():
            type_reference(e.name, x.name)  # FIXME This is not needed...

        tpl = env.get_template('enumeration.tpl')
        r  = tpl.render(item = e, render_enumerator = render_enumerator)
        store_rendered_type(e.name, r)

    for t in item.typedefs.values():
        type_reference(t.name, t.type.name)

        tpl = env.get_template('typedef.tpl')
        r  = tpl.render(item = t, render_type = render_type)
        store_rendered_type(t.name, r)

    for a in item.arrays.values():
        type_reference(a.name, a.type.name)

        tpl = env.get_template('array.tpl')
        r  = tpl.render(item = a, render_type = render_type)
        store_rendered_type(a.name, r)

    for m in item.maps.values():
        type_reference(m.name, m.key_type.name)
        type_reference(m.name, m.value_type.name)

        tpl = env.get_template('map.tpl')
        r  = tpl.render(item = m)
        store_rendered_type(m.name, r)

    # Determine type rendering order
    sys.stdout.write("Reordering type definitions : ")
    prepare_swap_types()
    swap_occurred = True
    while swap_occurred:
        sys.stdout.write('.')
        swap_occurred = reorder_types()
    print

    # OK, now output rendered types in the right order
    for idx, r in enumerate(rendered_types_ordered):
        result += "\n// Typedef #{} from {} in package {}\n".format(idx, item.name, package.name)
        result += r[1]

    tpl = env.get_template('typesheader.tpl')
    fullresult  = tpl.render(body = result, timestamp = timestamp,
            boilerplate = boilerplate_from_file(), imports = imports)

    return fullresult

def prepare_swap_types(): 
    # Preparation: store the location of types in rendered_types_ordered
    # for easy lookup
    for i, r in enumerate(rendered_types_ordered):
        name = r[0]
        rendered_types_index[name] = i

def swap_them(a,b):

    # Get indices
    i1 = rendered_types_index[a]
    i2 = rendered_types_index[b]

    # Swap (typename, text) pair location in array
    tmp = rendered_types_ordered[i1]
    rendered_types_ordered[i1] = rendered_types_ordered[i2]
    rendered_types_ordered[i2] = tmp

    # Update indices
    rendered_types_index[a] = i2
    rendered_types_index[b] = i1

def b_is_defined_later_than_a(a, b):
    return (rendered_types_index[a] < rendered_types_index[b])

def reorder_types():
    # What are we doing here?
    # => If a complex type (e.g. struct) references another type, then the
    # referenced type must be defined before it is used.   If it's defined
    # after, we swap the location of the referencer and referencee.
    # Repeat this process until no more swaps are necessary.

    # WARNING: This is a solution with O(n^3) complexity!  Although it's still
    # exponential it might be improved greatly by using another datastructure
    # (with O(1) lookup), so that the inner loop deals ONLY with those types
    # that are actually referenced by the first one.  But for the sizes we deal
    # with, this seems to be fine for now.

    # (Note it will also likely deadlock if a file has a circular dependency!
    # Opportunity for improvement here...)

    swapped = False
    for r1 in rendered_types_ordered:
        a = r1[0]  # We deal with the names of the types.  FIXME: A namedtuple would be nice here.
        for r2 in rendered_types_ordered:
            b = r2[0]
            if a_reference_to_b(a, b) and b_is_defined_later_than_a(a, b):
                swap_them(a, b)
                return True

    # FIXME = notice and break circular dependency
    return False

# This is used for rendering source files that are not just a list of types.
# For example as class declarations (.h) and class method body defintion
# (.cpp)
def template_render_plain_file(processor, filter, templatefile, suffix):
    tpl = env.get_template(templatefile)
    timestamp = time.strftime("%Y-%m-%d, %H:%M:%d")

    result = ""
    for p in processor.packages.values():
        # TODO Redo the imports --> #include connection
        imports = map(lambda x : x.namespace_reference, p.imports)

        name = None
        if 'typecollections' in filter:
            for tc in p.typecollections.values():
                name = tc.name
                r  = tpl.render(item = tc, name = name, timestamp = ts, render_type = render_type, boilerplate = "", imports = imports)
                result += r

        if 'interfaces' in filter:
            for i in p.interfaces.values():
                name = i.name    # This takes priority for the chosen file name
                r  = tpl.render(item = i, name = name, timestamp = timestamp, render_type = render_type, boilerplate = "", imports = imports)
                result += r

        if name != None and len(result) != 0:
            write_result_file(boilerplate_from_file() + result, name, suffix)

# This is used for headers that are expected to contain types.
# the order that types are definend is critical.
def render_typedef_file(processor, filter, suffix):

    result = ""
    for p in processor.packages.values():
        # TODO imports
        imports = map(lambda x : x.namespace_reference, p.imports)

        # FIXME does not fully take into account what parts are imported
        #self.namespace    --  None for "import model"
        #self.package_reference
        #self.namespace_reference

        # Simple mapping.  For now it assumes all namespaces are unique and
        # not dependent on the path.  All type headers are generated into a
        # single directory and all are included without subdirectory
        # #include "namespacename.h"

        reset_rendered_types()
        if 'interfaces' in filter:
            for i in p.interfaces.values():
                result = template_render_complex_types(p, i, imports)
                if len(result) != 0:
                    write_result_file(result, i.name, suffix)

        reset_rendered_types()
        if 'typecollections' in filter:
            for tc in p.typecollections.values():
                result = template_render_complex_types(p, tc, imports)
                if len(result) != 0:
                    write_result_file(result, tc.name, suffix)


def main():
    for f in FIDL_FILES:
        log ("-------------------------------------------------------")
        log (" ----- PROCESSING %s -----" % f)
        log ("-------------------------------------------------------")
        process_file(f)


if __name__ == "__main__":
    main()

