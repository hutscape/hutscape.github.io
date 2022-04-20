---
layout: default
---

<section class="hero is-medium is-light">
  <div class="hero-body">
    <div class="container">
      <p class="subtitle is-1">{{ site.description }}</p>
      <p class="subtitle is-1 is-spaced">🍶 🗝 🎐 🧺 👜 🔋 📦 📃 🚪 💡 🏡</p>
    </div>
  </div>
</section>

<section class="section is-medium">
  <div class="container">
    <p class="title is-1 has-text-centered"> Projects created </p>
    <p class="subtitle has-text-centered"> with open source hardware and software</p>
  </div>
</section>

<div class="container">
  {% assign projects = site.data.projects | sort: 'sequence' %}
  {% for project in projects reversed %}
  <section class="section is-small">
    <div class="columns">
      <div class="column is-3">
        <img src="https://hutscape.com/{{ project.name | downcase }}/images/prototype/front.jpg" alt="{{ project.name }} photo">
      </div>
      <div class="column is-9">
        <div class="level">
          <div class="level-left">
            <div class="level-item">
              <h2 class="title is-2 is-spaced">{{ project.name }}</h2>
            </div>
          </div>
          <div class="level-right">
            <div class="level-item">
              <div class="control">
                {% if project.completion %}
                <div class="tags has-addons">
                  <span class="tag is-medium is-light">completed</span>
                  <span class="tag is-medium is-success is-light">{{project.completion}}</span>
                </div>
                {% else %}
                <div class="tags has-addons">
                  <span class="tag is-medium is-light is-light">ongoing</span>
                  <span class="tag is-medium is-warning is-light">since {{project.started}}</span>
                </div>
                {% endif %}
              </div>
            </div>
          </div>
        </div>
        <p class="subtitle is-4">{{ project.description }}</p>
        <div class="field is-grouped is-grouped-multiline">
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-dark">
                <span class="icon is-large">
                  <i class="fas fa-battery-half"></i>
                </span>
                power
              </span>
              <span class="tag is-medium is-light">{{project.power}}</span>
            </div>
          </div>
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-dark">
                <span class="icon is-large">
                  <i class="fas fa-wifi"></i>
                </span>
                wireless
              </span>
              <span class="tag is-light is-medium">{{project.wireless}}</span>
            </div>
          </div>
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-dark">
                <span class="icon is-large">
                  <i class="fas fa-eye"></i>
                </span>
                sensor
              </span>
              <span class="tag is-light is-medium">{{project.sensor}}</span>
            </div>
          </div>
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-dark">
                <span class="icon is-large">
                  <i class="fas fa-microchip"></i>
                </span>
                mcu
              </span>
              <span class="tag is-light is-medium">{{project.mcu}}</span>
            </div>
          </div>
        </div>
        <div class="field is-grouped is-grouped-multiline">
          {% if project.cogs_usd %}
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">bom cost</span>
              <span class="tag is-medium is-white">USD ${{ project.cogs_usd }}</span>
            </div>
          </div>
          {% endif %}
          {% if project.bom %}
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">bom items</span>
              <span class="tag is-medium is-white">{{project.bom}}</span>
            </div>
          </div>
          {% endif %}
          {% if project.battery_life %}
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">battery life</span>
              <span class="tag is-medium is-white">{{project.battery_life}}</span>
            </div>
          </div>
          {% endif %}
        </div>
        <a class="button is-large is-fullwidth is-info" href="{{site.url}}{{ project.url }}">How to build it</a>
      </div>
    </div>
  </section>
  {% endfor %}
</div>
