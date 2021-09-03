---
layout: tutorials
title: RGB LED nRF52

dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRF52 nrfutil
    url: https://github.com/adafruit/Adafruit_nRF52_nrfutil
chips:
  - nRF52
dev_board: Adafruit Feather Bluefruit
components:
  - name: Adafruit Feather Bluefruit
    url: https://amzn.to/3ndsBlF
features:
  - RGB
  - LED
images:
  schematic: rgb-led-nrf52-schematic.png
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52

references:
  - name: Fading on-board LED with PWM
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Hardware/Fading/Fading.ino
  - name: nRF52 Adafruit pin names
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/variants/feather_nrf52832/variant.h
---

Display colors with an RGB LED and Adafruit's nRF52 Bluefruit board.
