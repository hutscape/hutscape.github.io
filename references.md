---
layout: page
title: References
permalink: /references/
---

Pinouts, schematics, footprint layouts and data sheets of various ICs, chips and devices.

<ul>
{% for ref in site.references %}
  <li>
    <p><a href="{{ ref.url }}">{{ ref.title }}</a></p>
    <p>Chip: {{ ref.chip }}</p>
    <p>Type: {{ ref.type }}</p>
    <p> Tags:
    {% for tag in ref.tags %}
      {{ tag }}
    {% endfor %}
    </p>
  </li>
{% endfor %}
</ul>
