---
layout: page
title: Tutorials
permalink: /tutorials
sequence: 1
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

  {% for tut in site.tutorials %}
  <a class="panel-block searchable" data-index="{{ tut.title | downcase }} {% for item in tut.features %}{{ item | downcase }} {% endfor %} {% for item in tut.sensors %}{{ item | downcase }} {% endfor %} {% for item in tut.chips %}{{ item | downcase }} {% endfor %} {% if tut.dev_board %} {{tut.dev_board | downcase }} {% endif %} " href="{{ tut.url }}">
    <span class="panel-icon">
      <i class="fas fa-book" aria-hidden="true"></i>
    </span>
    {{ tut.title }}
    <div class="tags" style="margin-left:5px">
      {% if tut.dev_board %}
        <span class="tag is-light is-danger">{{ tut.dev_board }}</span>
      {% endif %}

      {% if tut.firmware %}
        {% for firmware in tut.firmware %}
          <span class="tag is-light is-info">{{ firmware }}</span>
        {% endfor %}
      {% endif %}

      {% if tut.chips %}
        {% for chip in tut.chips %}
          <span class="tag is-light is-warning">{{ chip }}</span>
        {% endfor %}
      {% endif %}

      {% if tut.tool %}
        <span class="tag is-light is-danger">{{ tut.tool }}</span>
      {% endif %}

      {% if tut.sensors %}
        {% for sensor in tut.sensors %}
        <span class="tag is-light is-primary">{{ sensor }}</span>
        {% endfor %}
      {% endif %}

      {% if tut.versions %}
        {% for v in tut.versions %}
          <span class="tag is-light is-link">{{ v.name }} v{{v.version}}</span>
        {% endfor %}
      {% endif %}

      <!-- TODO -->
      {% if jekyll.environment == "development" %}
        {% if tut.video %}
        {% else %}
        <span class="tag is-danger">TODO VIDEO</span>
        {% endif %}

        {% if tut.images.prototype %}
        {% else %}
        <span class="tag is-success">TODO images</span>
        {% endif %}
      {% endif %}
    </div>
  </a>
  {% endfor %}
</nav>
