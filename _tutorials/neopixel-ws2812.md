---
layout: tutorials
title: Neopixel with Arduino UNO
hardware:
  - arduino
  - uno
  - neopixel
  - WS2812
  - adafruit
references:
  - name: WS2812 Datasheet
    url: https://cdn-shop.adafruit.com/datasheets/WS2812.pdf
  - name: Adafruit Neopixel simple code
    url: https://github.com/adafruit/Adafruit_NeoPixel/blob/master/examples/simple/simple.ino
  - name: Adafruit Neopixel uberguide
    url: https://learn.adafruit.com/adafruit-neopixel-uberguide
---

Install Neopixel library:

```sh
arduino-cli lib install "Adafruit NeoPixel"
```

The signals were captured with the Saleae Logic Analyser.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}/WS2818_Arduino_UNO.sal" class="button is-primary">Download Saleae Analyser File</a>

Zoomed out signals:

<img src="{{ site.url }}/assets/images/tutorials/neopixel-ws2812-signal-zoomed-out.png" alt="WS2818 signal captured with 10 pixels">

Magnified signal at a closer look:

<img src="{{ site.url }}/assets/images/tutorials/neopixel-ws2812-signal-zoomed-in.png" alt="WS2818 signal captured with 10 pixels">
