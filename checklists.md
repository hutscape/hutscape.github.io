---
layout: page
title: Checklists
subtitle: Good checklists to go through!
permalink: /checklists
sequence: 2
type: header
---

<nav class="panel">
  {% for checklist in site.checklists %}
  <a class="panel-block searchable" href="{{ checklist.url }}">
    <span class="panel-icon">
      <i class="fas fa-book" aria-hidden="true"></i>
    </span>
    <strong>{{ checklist.title }}</strong> : {{ checklist.description }}
  </a>
  {% endfor %}
</nav>
