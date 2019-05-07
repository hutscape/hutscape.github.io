---
layout: page
title: Checklists
permalink: /checklists/
---

Good checklists!

<ul>
{% for checklist in site.checklists %}
  <li>
    <a href="{{ checklist.url }}">{{ checklist.title }}</a>
      - {{ checklist.description }}
  </li>
{% endfor %}
</ul>
