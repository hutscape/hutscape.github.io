---
layout: tutorials
title: Neopixel with RaspberryPI Pico

dependancies:
  - name: Pico toolchain
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
dev_board: RaspberryPI Pico
components:
  - name: Raspberry PI Pico
    url: https://amzn.to/3sKa5Cv
chips:
  - RP2040
  - WS2812
features:
  - neopixel
firmware:
  - C
  - C++
images:
  prototype: pico-neopixel-prototype.png
  schematic: pico-neopixel-schematic.png
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
source_code_path: pico-neopixel.c
prerequisites:
  - name: Blinky with RaspberryPI Pico
    url: ./blinky-pico
  - name: Level shifter
    url: ./level-shifter-4channel
---

This code example creates a simple colored blinky with RaspberryPI Pico board with `RP2040` microcontroller using the native C/C++ SDK. It shows how the first pixel is lighted with different colors with option A where a delay of `500ms` is placed in between lighting each color. With Option B, where `500ms` delay is removed, the cascading of pixel is shown.

## Opion A: Displaying individual colors

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}/pico-neopixel-option-a.sal" class="button is-primary">Download Saleae Analyser File</a>

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-prototype-option-a.png)

The logic analyzer traces show the 7 colors.

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-a-zoomout.png)

The logic analyser traces show the Red LED signal zoomed in.

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-a-zoomin.png)

## Option B: Cascading pixels

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}/pico-neopixel-option-B.sal" class="button is-primary">Download Saleae Analyser File</a>

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-prototype-option-b.png)

The logic analyzer shows one signal that is cascading with multiple colors.

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-b-zoomout.png)

The logic analyzer shows a zoomed-in signal of the cascading colors.

![]({{ site.url }}/assets/images/tutorials/pico-neopixel-signals-option-b-zoomin.png)
