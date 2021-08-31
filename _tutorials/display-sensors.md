---
layout: tutorials
title: Display sensor values
dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit Si7021
    url: https://github.com/adafruit/Adafruit_Si7021
  - name: Adafruit VEML6075
    url: https://github.com/adafruit/Adafruit_VEML6075
  - name: Adafruit SHARP Memory display
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display
chips:
  - nRF52
  - VEML6075
  - Si7021
dev_board: Adafruit Feather Bluefruit
features:
  - LiPo
  - UV
  - temperature
  - humidity
images:
  console: display-sensors-console.png
  prototype: display-sensors-prototype.jpg
  schematic: display-sensors-schematic.png
components:
  - name: Solderless breadboard
    url: https://amzn.to/3gNRp1x
  - name: Adafruit Feather nRF52 Bluefruit LE
    url: https://amzn.to/3ndsBlF
  - name: Adafruit Si7021 breakout board
    url: https://amzn.to/3t47EvE
  - name: Adafruit UV sensor breakout board
    url: https://www.adafruit.com/product/3964
references:
  - name: Adafruit Si7021 firmware
    url: https://github.com/adafruit/Adafruit_Si7021/blob/master/examples/si7021/si7021.ino
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52
  - name: UV sensor
    url: ./sensor-uv
  - name: SHARP display
    url: ./sharp-display
  - name: Display UV values
    url: ./display-uv
  - name: Display UV and LiPo
    url: ./display-uv-lipo
prerequisites:
  - name: Blinky nRF52
    url: ./blinky-nrf52
  - name: UV sensor
    url: ./sensor-uv
  - name: SHARP display
    url: ./sharp-display
  - name: Display UV values
    url: ./display-uv
  - name: Display UV and LiPo
    url: ./display-uv-lipo
---

Display UV and temperature / humidity sensor values with a LiPo.

Hardware used:

1. Adafruit Bluefruit nRF52 breakout board
1. Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
1. Adafruit UV sensor VEML 6075 breakout board
1. Adafruit Temperature/Humidity sensor Si7021 breakout board
1. LiPo 1200mAh 3.7V
