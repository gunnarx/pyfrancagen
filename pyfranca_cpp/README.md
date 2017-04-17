= Prerequisites

* clang-format must be installed for post-processing of generated C/C++ code.
If clangformat cannot be called then there is no friendly message - you
will get a complaint and trace from python.

* pyfranca and jinja2 (included as submodules here for convenience)

= Documentation

* Generated results are stored in src_gen/

= BUGS

* Quite a few probably.  This is a first attempt.
* When a .fidl file imports another .fidl file this is not translated to
  #includes in C/C++ generation.  Instead all types that are needed end up
  being generated in the main types file.
* However, included files are generated, so for the most part there are no
  missing types to be able to compile a single .cpp file.
* Obviously advanced imports where only parts of another file are included
  are also not considered.

== TODO list

* Built-in Franca types are translated using a global typedef file
  franca_types.h.  Of course some might prefer the code generator translates
  directly into native C/C++ types
* Single out-arguments may be preferrable to get as return values, unless
  that is used for error reporting. Currently all methods return void.
* Franca error definitions are not translated (to either return value or
  Exception)
* Probably quite some Franca features like inheritance and other such
  things not working at all.
