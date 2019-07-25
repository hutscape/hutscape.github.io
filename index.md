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

<section class="section is-medium">
  <div class="container">
    <h2 class="title is-1 has-text-centered"> Projects created </h2>
    <h4 class="subtitle has-text-centered"> with open source hardware and software </h4>
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
            <p class="title">{{ project.name }}</p>
            <p class="handwriting has-text-grey">V{{project.version}}</p>
          </div>
          <div class="level-right">
            {% if project.completion %}
            <p class="has-text-grey is-size-7">{{ project.completion }}</p>
            {% else %}
            <span class="tag is-warning is-size-7">ongoing</span>
            {% endif %}
          </div>
        </div>
        <p class="subtitle">{{ project.description }}</p>

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

          {% if project.vendors %}
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">vendors</span>
              <span class="tag is-medium is-white">{{project.vendors}}</span>
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
