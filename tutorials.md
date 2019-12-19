---
layout: page
title: Tutorials
permalink: /tutorials
sequence: 2
---

<p class="subtitle">List of getting started tutorials with <a href="https://stackoverflow.com/help/mcve">minimal, reproducible, complete code</a> where applicable.</p>

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
  <a class="panel-block searchable" data-index="{{ component.title | downcase }} {% for item in component.hardware %}{{ item | downcase }} {% endfor %}" href="{{ component.url }}">
    <span class="panel-icon">
      <i class="fas fa-book" aria-hidden="true"></i>
    </span>
    {{ component.title }}

    <div class="tags">
    {% for item in component.hardware %}
      <span class="tag is-light">{{ item }}</span>
    {% endfor %}
    </div>
  </a>
  {% endfor %}
</nav>
