---
layout: page
title: References
permalink: /references/
---

Pinouts, schematics, footprint layouts and data sheets of various ICs, chips and devices.

<input type="text" placeholder="search" id="search">

<ul>
{% for ref in site.references %}
  <li class="searchable" data-index="{{ ref.title | downcase }} {{ ref.chip | downcase }} {{ ref. manufacturer | downcase }} {{ ref.type | downcase }} {{ ref.version | downcase }}">
    <p><a href="{{ ref.source }}">{{ ref.title }}</a></p>
    <p>
    Chip: {{ ref.chip }},
    Type: {{ ref.type }},
    {%- if ref.manufacturer -%}
      Manufactured by: {{ ref.manufacturer }}
    {%- endif -%}
    </p>
  </li>
{% endfor %}
</ul>
