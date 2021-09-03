---
layout: tutorials
title: Sharp display

dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRF52 nrfutil
    url: https://github.com/adafruit/Adafruit_nRF52_nrfutil
  - name: Adafruit SHARP memory display firmware
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display
components:
  - name: Adafruit Feather Bluefruit
    url: https://amzn.to/3ndsBlF
dev_board: Adafruit Feather Bluefruit
chips:
  - nRF52
features:
  - sharp
  - display
images:
  schematic: sharp-display-schematic.png
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52

references:
  - name: Adafruit SHARP memory display firmware
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display/blob/master/examples/sharpmemtest/sharpmemtest.ino
---

Adafruit Bluefruit nRF52 breakout board and Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels are used.
