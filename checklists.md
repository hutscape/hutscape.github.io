---
layout: page
title: Checklists
permalink: /checklists
sequence: 1
---

<p class="subtitle">Good checklists to go through!</p>

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
