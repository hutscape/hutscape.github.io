---
layout: default
---

<section class="hero is-medium is-light">
  <div class="hero-body">
    <div class="container">
      <h2 class="subtitle is-1"> {{ site.description }} </h2>
      <p class="subtitle is-1 is-spaced">🍶 🗝 🎐 🧺 👜 🔋 📦 📃 🚪 💡 🏡</p>
    </div>
  </div>
</section>

<section class="section is-small">
  <div class="container">
    <h2 class="title is-1 has-text-centered"> Projects created </h2>
    <h4 class="subtitle has-text-centered"> with open source hardware and software </h4>
  </div>
</section>

<section class="section is-small">
  <div class="container">
    {% assign projects = site.data.projects | sort: 'sequence' %}
    {% for project in projects reversed %}
    <div class="columns">
      <div class="column is-3">
        <img src="/assets/images/projects/{{ project.name | downcase }}.jpg" alt="{{ project.name }} photo">
      </div>

      <div class="column is-9">
        <p class="title">{{ project.name }}</p>
        <p class="subtitle">{{ project.description }}</p>

        <div class="field is-grouped is-grouped-multiline">
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-dark">wireless</span>
              <span class="tag is-info">{{project.wireless}}</span>
            </div>
          </div>

          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-dark">mcu</span>
              <span class="tag is-success">{{project.mcu}}</span>
            </div>
          </div>

          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-dark">sensor</span>
              <span class="tag is-primary">{{project.sensor}}</span>
            </div>
          </div>

          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-dark">power</span>
              <span class="tag is-primary">{{project.power}}</span>
            </div>
          </div>
        </div>

        <p>{{ project.completion }}</p>

        <ul>
          <li><strong>BOM Cost:</strong> USD {{ project.cogs }}</li>
          <li><strong>Total BOM items:</strong> {{ project.bom }}</li>
          <li><strong>Completed within:</strong> {{ project.duration }} months</li>
        </ul>

        <a class="button is-medium is-info" href="{{site.url}}{{ project.url }}">How to build it</a>
      </div>
    </div>
    {% endfor %}
  </div>
</section>
