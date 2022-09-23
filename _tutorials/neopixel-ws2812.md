---
layout: tutorials
title: Neopixel with Arduino UNO

dev_board: Arduino UNO
dependancies:
  - name: Adafruit Neopixel
    url: https://github.com/adafruit/Adafruit_NeoPixel
chips:
  - WS2812
features:
  - neopixel
images:
  console: neopixel-ws2812-console.png
  prototype: neopixel-ws2812-prototype.jpg
  schematic: neopixel-ws2812-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: Adafruit Neopixel 60 LED Ring
    url: https://amzn.to/3yAAPYZ
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

![]({{ site.url }}/assets/images/tutorials/neopixel-ws2812-signal-zoomed-out.png)

Magnified signal at a closer look:

![]({{ site.url }}/assets/images/tutorials/neopixel-ws2812-signal-zoomed-in.png)
