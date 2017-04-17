{#- The parser gives a direct Reference, which means we have only the name
    of the type, no object.   would not expect this to work if one of the
    types were unnamed array type (for example)  -#}
typedef std::map<{{ item.key_type.name }}, {{ item.value_type.name }}> {{ item.name }};


