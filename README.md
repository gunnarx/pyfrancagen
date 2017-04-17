= Franca IDL code generation

Some experiments around Franca IDL code generation
implemented in python.

Based on :
- pyfranca project  (Franca parser - does the heavy lifting)
- jinja2            (Template/generation framework)

The above projects are brought in as submodules for convenience

Plus:
- pyfranca_cpp      (jinja templates + logic to generate C++ headerfiles and classes from Franca IDL)

pyfranca_cpp is not yet separated into its own project and brought in as
submodule, but might be.  It's supposed to be reusable.

= Try:

First make sure submodules are brought in:
$ git submodule update --init

$ cd lbs
$ ./generate_lbs.py

Check results in src_gen

Optionally:
$ cd src_gen
$ doxygen              (make sure Doxygen is installed)
$ firefox index.html

= BUGS
- Boilerplate is generated twice, (only on some file types)
