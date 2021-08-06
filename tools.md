---
layout: page
title: Tools
subtitle: Stuff we use and we love!
permalink: /tools
sequence: 3
type: header

tools:
  - topic: Hardware lab
    list:
      - name: Hot air gun
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_Am4hDi
      - name: Multimeter
        urls:
          - website: EEVBlog
            url: https://www.eevblog.com/product/121gw/
      - name: Logic Analyser
        urls:
          - website: Amazon
            url: https://amzn.to/3jasNAq
      - name: Solder paste
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_AS3uzg
      - name: Pin headers
        urls:
          - website: Amazon
            url: https://amzn.to/3rszW34
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_AZtMoD
      - name: Inventory Management
        urls:
          - website: PartsBox
            url: https://partsbox.com
      - name: ECAD
        urls:
          - website: KiCad
            url: https://www.kicad.org/
      - name: Parts zip-lock bags
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_A1eCVK
      - name: Stackable storage boxes
        urls:
          - website: IKEA
            url: https://www.ikea.com/us/en/cat/samla-series-12553/

  - topic: Books
    list:
      - name: Getting Things Done
        urls:
          - website: Amazon
            url: https://amzn.to/3nc51WB
      - name: Checklist Manifesto
        urls:
          - website: Amazon
            url: https://amzn.to/3eqlXED

  - topic: Photography & Videography
    list:
      - name: Design
        urls:
          - website: Canva
            url: https://www.canva.com/
      - name: Video editing
        urls:
          - website: daVinci Resolve
            url: https://www.blackmagicdesign.com/products/davinciresolve/
      - name: Music
        urls:
          - website: Uppbeat
            url: https://uppbeat.io?referral=sayanee-8wzr3

---

<div class="block">
  <div class="content is-medium">
    <p>Some links below are affiliate. I receive a small commission at no extra cost to you.</p>
  </div>
</div>

{% for tool in page.tools %}
<div class="block">
  <div class="container">
    <h2 class="title is-2">{{ tool.topic }}</h2>
    <div class="content is-medium">
      <ul>
        {% for li in tool.list %}
          <li>
            {{ li.name }}
              {% for url in li.urls %}
                <a class="tag is-light is-light" href="{{ url.url }}">{{url.website}}</a>
              {% endfor %}
          </li>
        {% endfor %}
      </ul>
    </div>
  </div>
</div>
{% endfor %}
