#pragma once
// Generated from Franca IDL Interface {{ fqn }}
// {{ timestamp }}

{{ boilerplate }}

#include "franca_types.h"
{%- for i in imports %}
#include "{{ i.name }}.types.h"
{%- endfor %}

{{ body }}
