---
layout: page
title: Credits
subtitle: Many tools are used to create the projects!
permalink: /credits
sequence: 3

credits:
  - topic: Open source hardware
    list:
      - name: KiCad for creating electronics designs
        url: http://www.kicad-pcb.org/
      - name: Interactive HTML BOM generation plugin for KiCad
        url: https://github.com/openscopeproject/InteractiveHtmlBom

  - topic: Open source firmware
    list:
      - name: Arduino CLI
        url: https://github.com/arduino/arduino-cli
      - name: CPP Lint
        url: https://github.com/cpplint/cpplint
      - name: Adafruit nrfutil for nRF52
        url: https://github.com/adafruit/Adafruit_nRF52_nrfutil

  - topic: Web technologies
    list:
      - name: Bulma CSS Framework
        url: https://bulma.io
      - name: Highlight JS for syntax highlighting
        url: https://highlightjs.org
      - name: Frappe Gantt for creating Gantt Chart
        url: https://github.com/frappe/gantt
      - name: Money JS for currency conversion
        url: http://openexchangerates.github.io/money.js
      - name: Anchor JS for adding deep anchor links
        url: https://github.com/bryanbraun/anchorjs
---

<h2 class="subtitle">{{page.subtitle}}</h2>

{% for credit in page.credits %}
<section class="section is-small">
  <div class="container">
    <h2 class="title is-1">{{ credit.topic }}</h2>

    <div class="content is-medium">
      <ol>
        {% for li in credit.list %}
        <li><a href="{{ li.url }}">{{ li.name }}</a></li>
        {% endfor %}
      </ol>
    </div>
  </div>
</section>
{% endfor %}
