---
layout: page
title: References
permalink: /references
sequence: 3
---

<h2 class="subtitle">Links to pinouts, schematics, footprint layouts and datasheets of various ICs, chips and devices.</h2>

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

  {% for ref in site.references %}
  <a class="panel-block searchable" data-index="{{ ref.title | downcase }} {{ ref.chip | downcase }} {{ ref. manufacturer | downcase }} {{ ref.type | downcase }} {{ ref.version | downcase }}" href="{{ ref.source }}">
    <span class="panel-icon">
      <i class="fas fa-book" aria-hidden="true"></i>
    </span>
    {{ ref.title }}

    <div class="field is-grouped is-grouped-multiline">
      {%- if ref.chip -%}
      <div class="control">
        <div class="tags has-addons">
          <span class="tag is-white">chip</span>
          <span class="tag is-light">{{ ref.chip }}</span>
        </div>
      </div>
      {%- endif -%}

      {%- if ref.type -%}
      <div class="control">
        <div class="tags has-addons">
          <span class="tag is-white">type</span>
          <span class="tag is-light">{{ ref.type }}</span>
        </div>
      </div>
      {%- endif -%}

      {%- if ref.manufacturer -%}
      <div class="control">
        <div class="tags has-addons">
          <span class="tag is-white">manufacturer</span>
          <span class="tag is-light">{{ ref.manufacturer }}</span>
        </div>
      </div>
      {%- endif -%}

    </div>
  </a>
  {% endfor %}
</nav>
