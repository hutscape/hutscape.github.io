---
layout: components
title: Display sensor values
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - LiPo
  - uv
  - temperature
  - humidity
  - veml6075
  - si7021
---

Display UV and temperature / humidity sensor values with a LiPo.

Hardware used:

1. Adafruit Bluefruit nRF52 breakout board
1. Adafruit SHARP Memory Monochrome Display Breakout 168x144 pixels
1. Adafruit UV sensor VEML 6075 breakout board
1. Adafruit Temperature/Humidity sensor Si7021 breakout board
1. LiPo 1200mAh 3.7V

![](/assets/images/components/display-sensors-schematic.png)

Serial monitor:

![](/assets/images/components/display-sensors-prototype.jpg)

Pre-requisites:

1. [Blinky nRF52](./blinky-nrf52)
1. [UV sensor](./sensor-uv)
1. [SHARP display](./sharp-display)
1. [Display UV values](./display-uv)
1. [Display UV and LiPo](./display-uv-lipo)

References:

- [Adafruit Si7021 firmware](https://github.com/adafruit/Adafruit_Si7021/blob/master/examples/si7021/si7021.ino)
