---
layout: page
title: Components
permalink: /components/
---

List of [Minimal, Complete and Verifiable examples of code](https://stackoverflow.com/help/mcve) to flash into different devices.

<input type="text" class="searchbar" placeholder="search" id="search">

<ul>
{% for component in site.components %}
  <li class="searchable" data-index="{{ component.title | downcase }} {% for item in component.hardware %}{{ item | downcase }} {% endfor %}">
    <a href="{{ component.url }}">{{ component.title }}</a>
      -
      {% for item in component.hardware %}
        {{ item }}
      {% endfor %}
  </li>
{% endfor %}
</ul>
