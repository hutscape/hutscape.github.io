---
layout: page
title: Components
permalink: /components/
---

List of [Minimal, Complete and Verifiable examples of code](https://stackoverflow.com/help/mcve) to flash into different devices.

<ul>
{% for component in site.components %}
  <li><a href="{{ component.url }}">{{ component.title }}</a> - {{ component.mcu }}</li>
{% endfor %}
</ul>
