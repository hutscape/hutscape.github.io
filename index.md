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
        <img src="https://hutscape.com/{{ project.name | downcase }}/images/prototype/front.jpg" alt="{{ project.name }} photo">
      </div>

      <div class="column is-9">
        <p class="title">{{ project.name }}</p>
        <p class="subtitle">{{ project.description }}</p>

        <div class="level">
          <div class="level-left">
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
          </div>
          <div class="level-right">
            <span class="tag">{{ project.completion }}</span>
          </div>
        </div>

        <div class="field is-grouped is-grouped-multiline">
          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">bom cost</span>
              <span class="tag is-medium is-white">USD ${{project.cogs_usd | money}}</span>
            </div>
          </div>

          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">bom items</span>
              <span class="tag is-medium is-white">{{project.bom}}</span>
            </div>
          </div>

          <div class="control">
            <div class="tags has-addons">
              <span class="tag is-medium is-light">duration</span>
              <span class="tag is-medium is-white">{{ project.duration }} months</span>
            </div>
          </div>
        </div>

        <a class="button is-large is-fullwidth is-info" href="{{site.url}}{{ project.url }}">How to build it</a>
      </div>
    </div>
    {% endfor %}
  </div>
</section>
