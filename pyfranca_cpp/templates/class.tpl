// Generated from Franca IDL Interface {{ fqn }}
// {{ timestamp }}

{{ boilerplate }}

{%- for inc in includes %}
#include "{{inc}}.types.h"
{%- endfor %}
#include "{{name}}.h"

// Constructors, etc.
{{ name }}::{{ name }}() { /* TODO, or use implicit */ }

{{ name }}::{{ name }} (const {{ name }} &x) { /* TODO, or use implicit */ }

{{ name }}& {{ name }}::operator=(const {{ name }} &x) { /* TODO, or use implicit */ }

{{ name }}::~{{ name}} () { /* TODO, or use implicit */ }

{% for m in item.methods.values() %}
{% set maybecomma = joiner(",") %}
void {{ name }}::{{m.name}} (
                           {%- for p in m.in_args.values() -%}
                              {{ maybecomma() }} {{ render_type(p) }} {{ p.name }}{% endfor %}
                           {%- for p in m.out_args.values() -%}
                              {{ maybecomma() }} {{ render_type(p)}} &{{ p.name }}{% endfor %}
                       )
{
   /* Method body for {{ m.name }} here */

};
{% endfor %}

