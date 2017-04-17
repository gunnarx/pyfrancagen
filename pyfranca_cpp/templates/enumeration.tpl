enum class {{ item.name }} {
    {%- for eo in item.enumerators.values() %}
        {{- render_enumerator(eo) }}
    {%- endfor %}
};


