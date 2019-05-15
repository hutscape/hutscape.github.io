---
layout: components
title: Blinky nRF52
code: blinky-nrf52/blinky-nrf52.ino
hardware:
  - nRF52
  - bluefruit
  - adafruit
---

Create a blinky LED with Adafruit Bluefruit nRF52 breakout board.

Arduino IDE > Tools settings include:

![](/assets/images/components/blinky-nrf52-arduino-settings.png)

To use command line [arduino-cli](https://github.com/arduino/arduino-cli), install [Adafruit nRF52 nrfutil](https://github.com/adafruit/Adafruit_nRF52_nrfutil) with `pip3`:

```
pip3 install --user adafruit-nrfutil
```

References

- [Bluefruit nRF52 Feather Learning Guide
Get started now with our most powerful Bluefruit board yet](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/introduction)
- [Adafruit Feather nRF52 Bluefruit LE - nRF52832](https://www.adafruit.com/product/3406)
