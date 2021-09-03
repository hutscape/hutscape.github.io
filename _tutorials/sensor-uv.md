---
layout: tutorials
title: UV Sensor VEML6075

dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRF52 nrfutil
    url: https://github.com/adafruit/Adafruit_nRF52_nrfutil

dev_board: Adafruit Feather Bluefruit
components:
  - name: Adafruit Feather Bluefruit
    url: https://amzn.to/3ndsBlF
sensor:
  - UV Index
chips:
  - nRF52
  - VEML6075
images:
  console: sensor-uv-console.png
  schematic: sensor-uv-schematic.png
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52
---

Read the UV sensor values with Adafruit nRF52 Feather and Adafruit VEML6075 breakout board.
