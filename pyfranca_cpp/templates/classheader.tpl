#pragma once
// Generated from Franca IDL Interface {{ fqn }}
// {{ timestamp }}

{{ boilerplate }}

#include "{{name}}.types.h"

{%- for i in imports %}
#include "{{ i.name }}.types.h"
{%- endfor %}

class {{ name }}
{
    public:
        {{ name }} ();
        {{ name }} (const {{ name }} & c);
        {{ name }} & operator=(const {{ name }} & c);
        ~{{ name}} ();

    {% for m in item.methods.values() %}
    void {{ m.name }} (
                        {% set maybecomma = joiner(",") %}
                        {%- for p in m.in_args.values() -%}
                           {{ maybecomma() }} {{ render_type(p) }} {{ p.name }}{% endfor %}
                        {%- for p in m.out_args.values() -%}
                           {{ maybecomma() }} {{ render_type(p) }} &{{ p.name }}{% endfor %}
                      );
    {%endfor%}

  private:
    // none
};

