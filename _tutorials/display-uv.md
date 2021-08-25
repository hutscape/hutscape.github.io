---
layout: tutorials
title: Display UV values
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
sensors:
  - UV Index
features:
  - display
dev_board: Adafruit Feather Bluefruit
references:
  - name: Adafruit SHARP memory display firmware
    url: https://github.com/adafruit/Adafruit_SHARP_Memory_Display/blob/master/examples/sharpmemtest/sharpmemtest.ino
  - name: Display LiPo battery voltage firmware
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Hardware/adc_vbat/adc_vbat.ino
prerequisites:
  - name: nRF52 Breakout board
    url: ./nrf52-breakout
  - name: SHARP display
    url: ./sharp-display
---

Hardware used:

- Adafruit Bluefruit nRF52 breakout board
- Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
- Adafruit UV sensor breakout board
