---
layout: components
title: Display UV and LiPo values
code: display-uv-lipo/display-uv-lipo.ino
hardware:
  - nRF52
  - adafruit
  - bluefruit
  - uv
  - veml6075
  - lipo
  - display
---

Display UV sensor values with a LiPo

Hardware:

1. Adafruit Bluefruit nRF52 breakout board
1. Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
1. Adafruit UV sensor breakout board
1. LiPo 1200mAh 3.7V

![](/assets/images/components/display-uv-lipo-schematic.png)

Pre-requisites

1. [Blinky nRF52](./blinky-nrf52)
1. [UV sensor](./sensor-uv)
1. [SHARP display](./sharp-display)
1. [Display UV values](./display-uv)

References:

- [Adafruit SHARP memory display firmware](https://github.com/adafruit/Adafruit_SHARP_Memory_Display/blob/master/examples/sharpmemtest/sharpmemtest.ino)
- [Display LiPo battery voltage firmware](https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Hardware/adc_vbat/adc_vbat.ino)
