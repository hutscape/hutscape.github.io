---
layout: components
title: Display UV and LiPo values
hardware:
  - nRF52
  - adafruit
  - bluefruit
  - uv
  - veml6075
  - lipo
  - display
references:
  - name: Adafruit SHARP memory display firmware
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display/blob/master/examples/sharpmemtest/sharpmemtest.ino
  - name: Display LiPo battery voltage firmware
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Hardware/adc_vbat/adc_vbat.ino
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52
  - name: UV sensor
    url: ./sensor-uv
  - name: SHARP display
    url: ./sharp-display
  - name: Display UV values
    url: ./display-uv
---

Display UV sensor values with a LiPo

Hardware:

1. Adafruit Bluefruit nRF52 breakout board
1. Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
1. Adafruit UV sensor breakout board
1. LiPo 1200mAh 3.7V
