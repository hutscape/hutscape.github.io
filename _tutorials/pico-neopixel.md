---
layout: tutorials
title: Neopixel with RaspberryPI Pico
hardware:
  - raspberrypi
  - rpi
  - pico
  - rp2040
  - neopixel
  - ws2812
  - c/c++
references:
  - name: Raspberry Pi Pico example with WS2812
    url: https://github.com/raspberrypi/pico-examples/blob/master/pio/ws2812/ws2812.c
  - name: WS2812 Datasheet
    url: https://cdn-shop.adafruit.com/datasheets/WS2812.pdf
  - name: Adafruit NeoPixel Überguide
    url: https://learn.adafruit.com/adafruit-neopixel-uberguide
  - name: Level shifting with Neopixel
    url: https://learn.adafruit.com/neopixel-levelshifter
code: c
prerequisites:
  - name: Blinky with RaspberryPI Pico
    url: ./blinky-pico
---

This code example creates a simple colored blinky with RaspberryPI Pico board with `RP2040` microcontroller using the native C/C++ SDK. It shows how the first pixel is lighted with different colors with option A where a delay of `500ms` is placed in between lighting each color. With Option B, where `500ms` delay is removed, the cascading of pixel is shown.

## Opion A: Displaying individual colors

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}/pico-neopixel-option-a.sal" class="button is-primary">Download Saleae Analyser File</a>

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-prototype-option-a.png" alt="Display 7 colors with 500ms delay">

The logic analyzer traces show the 7 colors.

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-a-zoomout.png" alt="Display 7 colors with 500ms delay">

The logic analyser traces show the Red LED signal zoomed in.

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-a-zoomin.png" alt="Zoomed in signal of the RED colored LED display">

## Option B: Cascading pixels

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}/pico-neopixel-option-B.sal" class="button is-primary">Download Saleae Analyser File</a>

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-prototype-option-b.png" alt="Display cascading color">

The logic analyzer shows one signal that is cascading with multiple colors.

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-b-zoomout.png" alt="Display cascading colors">

The logic analyzer shows a zoomed-in signal of the cascading colors.

<img src="{{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-b-zoomin.png" alt="Display cascading color">
