struct {{ item.name }} {
    {%- for f in item.fields.values() %}
        {{ render_type(f) }} {{ f.name }}; {% endfor %}
};
{# TODO: extends, reference, flags  #}

