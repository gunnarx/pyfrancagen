# Prerequisites

* clang-format must be installed for post-processing of generated C/C++ code.
If clang-format cannot be called then there is no friendly message - you
will get a complaint and trace from python.

* pyfranca and jinja2

# Documentation

* Generated results are stored in src_gen/

# BUGS

* Quite a few probably.  This is a first attempt.
* When a .fidl file imports another .fidl file there's an attempt to create
  necessary #include statements.   It's not really guaranteed to work in
  all cases (yet).
* Also I suspect types might be generated multiple times in multiple files,
  since each file is treated individually and not tracking each other.
  Might be a lot to do here...
* I've successfully compiled some of the skeleton classes, so resolving
  all types worked in those cases at least.  But report when it's buggy.
* Obviously advanced Franca import statements where only parts of another
  file are included are also not considered.

# TODO list

* Built-in Franca types are translated using a global typedef file
  franca_types.h.  Of course some might prefer the code generator translates
  directly into native C/C++ types
* Single out-arguments may be preferrable to get as return values, unless
  that is used for error reporting. Currently all methods return void.
* Franca error definitions are not translated (to either return value or
  Exception)
* Probably quite some Franca features like inheritance and other such
  things not working at all.
