---
layout: tutorials
title: Display UV and LiPo values
dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit VEML6075
    url: https://github.com/adafruit/Adafruit_VEML6075
  - name: Adafruit SHARP Memory display
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display
chips:
  - nRF52
  - VEML6075
dev_board: Adafruit Feather Bluefruit
sensors:
  - UV Index
features:
  - lipo
  - display
images:
  schematic: display-uv-lipo-schematic.png
references:
  - name: Adafruit SHARP memory display firmware
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display/blob/master/examples/sharpmemtest/sharpmemtest.ino
  - name: Display LiPo battery voltage firmware
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Hardware/adc_vbat/adc_vbat.ino
components:
  - name: Solderless breadboard
    url: https://amzn.to/3gNRp1x
  - name: Adafruit Feather nRF52 Bluefruit LE
    url: https://amzn.to/3ndsBlF
  - name: Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
    url: https://www.adafruit.com/product/3502
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
