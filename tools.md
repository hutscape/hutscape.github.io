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
        image: hot_air_gun.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_Am4hDi
      - name: Multimeter
        image: multimeter.jpg
        urls:
          - website: EEVBlog
            url: https://www.eevblog.com/product/121gw/
      - name: Logic Analyser
        image: logic_analyser.jpg
        urls:
          - website: Amazon
            url: https://amzn.to/3jasNAq
      - name: Solder paste
        image: solder_paste.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_AS3uzg
      - name: Flux
        image: flux.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_Amhmyw
      - name: Inventory Management
        image: inventory_management.jpg
        urls:
          - website: PartsBox
            url: https://partsbox.com
      - name: Clear plastic zip-lock bags
        image: bags.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_9v8jvY
      - name: Stackable storage boxes
        image: stackable_boxes.jpg
        urls:
          - website: IKEA
            url: https://www.ikea.com/us/en/cat/samla-series-12553/
      - name: Flux cleaning solvent
        image: flu.jpg
        urls:
          - website: Electrolube
            url: https://electrolube.com/product/flu-fluxclene-flux-cleaning-solvent/
      - name: Anti-static dust-free wipes
        image: wipes.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_A6JUEI

  - topic: Books
    list:
      - name: Getting Things Done
        image: getting_things_done.jpg
        urls:
          - website: Amazon
            url: https://amzn.to/3nc51WB
      - name: Checklist Manifesto
        image: checklist_manifesto.jpg
        urls:
          - website: Amazon
            url: https://amzn.to/3eqlXED

  - topic: Photography & Videography
    list:
      - name: Phone holder
        image: phone_holder.jpg
        urls:
          - website: AliExpress
            url: https://s.click.aliexpress.com/e/_AWOEs8
      - name: Microphone
        image: microphone.jpg
        urls:
          - website: Amazon
            url: https://amzn.to/31WPW1h
      - name: Mic stand
        image: mic_stand.jpg
        urls:
          - website: Amazon
            url: https://amzn.to/3xzKZZu
      - name: Design
        image: canva.jpg
        urls:
          - website: Canva
            url: https://www.canva.com/
      - name: Video editing
        image: davinci_resolve.jpg
        urls:
          - website: daVinci Resolve
            url: https://www.blackmagicdesign.com/products/davinciresolve/
      - name: Music
        image: uppbeat.jpg
        urls:
          - website: Uppbeat
            url: https://uppbeat.io?referral=sayanee-8wzr3
      - name: Scripting
        image: grammarly.jpg
        urls:
          - website: Grammarly
            url: https://www.grammarly.com/
      - name: Screencasting
        image: quicktime.jpg
        urls:
          - website: QuickTime
            url: https://support.apple.com/downloads/quicktime

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
    {% for li in tool.list %}
    {% assign remainder = forloop.index | modulo: 4 %}

    {% if remainder == 1 %}
      <div class="columns is-multiline is-mobile has-text-centered">
    {% endif %}

    <div class="column is-3-tablet is-6-mobile tool">
      <a style="width: 100%" target="_blank" href="{{ li.urls.first.url }}" align="center">
        <img src="/assets/images/tools/{{ li.image }}"/>
        <p>{{ li.name }}</p>
      </a>
    </div>

    {% if remainder == 0 %}
      </div>
    {% endif %}
    {% endfor %}
    </div>
  </div>
</div>
{% endfor %}
