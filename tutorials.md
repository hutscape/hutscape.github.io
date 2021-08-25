---
layout: page
title: Tutorials
permalink: /tutorials
sequence: 2
type: header
---

<p class="subtitle">List of <strong>{{ site.tutorials.size }}</strong> getting started tutorials with <a href="https://stackoverflow.com/help/mcve">minimal, reproducible, complete code</a>.</p>

<style id="search_style"></style>

<nav class="panel">
  <div class="panel-block">
    <p class="control has-icons-left">
      <input class="input is-large" type="text" id="search" placeholder="search">
      <span class="icon is-small is-left">
        <i class="fas fa-search" aria-hidden="true"></i>
      </span>
    </p>
  </div>

  {% for component in site.tutorials %}
  <a class="panel-block searchable" data-index="{{ component.title | downcase }} {% for item in component.features %}{{ item | downcase }} {% endfor %} {% for item in component.sensors %}{{ item | downcase }} {% endfor %} {% for item in component.chips %}{{ item | downcase }} {% endfor %} {% if component.dev_board %} {{component.dev_board | downcase }} {% endif %} " href="{{ component.url }}">
    <span class="panel-icon">
      <i class="fas fa-book" aria-hidden="true"></i>
    </span>
    {{ component.title }}
    <div class="tags">
      {% if component.dev_board %}
        <span class="tag is-light is-danger">{{ component.dev_board }}</span>
      {% endif %}

      {% if component.firmware %}
        {% for firmware in component.firmware %}
          <span class="tag is-light is-info">{{ firmware }}</span>
        {% endfor %}
      {% endif %}

      {% if component.chips %}
        {% for chip in component.chips %}
          <span class="tag is-light is-warning">{{ chip }}</span>
        {% endfor %}
      {% endif %}

      {% if component.tool %}
        <span class="tag is-light is-danger">{{ component.tool }}</span>
      {% endif %}

      {% if component.sensors %}
        {% for sensor in component.sensors %}
        <span class="tag is-light is-primary">{{ sensor }}</span>
        {% endfor %}
      {% endif %}
    </div>
  </a>
  {% endfor %}
</nav>
