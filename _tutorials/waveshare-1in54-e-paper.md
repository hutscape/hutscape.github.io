---
layout: tutorials
title: Waveshare 1.54 inch

dependancies:
  - name: Waveshare e-paper
    url: https://github.com/waveshare/e-Paper

dev_board: Arduino UNO
firmware:
  - Arduino
chips:
  - ATmega328P
  - Waveshare
features:
  - e-paper
  - e-ink
  - SPI
versions:
  - name: e-paper
    version: 1
images:
  prototype: waveshare-1in54-e-paper-prototype.JPG
  schematic: waveshare-1in54-e-paper-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: WaveShare 1.54in E-Ink module
    url: https://amzn.to/3n7gLtk
video: enfliRlCYbcx
references:
  - name: Waveshare 1.54 inch e-paper module
    url: https://www.waveshare.com/product/1.54inch-e-Paper-Module.htm
  - name: Waveshare 1.54 inch e-paper schematic
    url: https://www.waveshare.com/w/upload/5/5b/1.54inch_e-Paper_Schematic.pdf
  - name: E-Ink Arduino library from WaveShare
    url: https://github.com/waveshare/e-Paper/tree/master/Arduino/epd1in54
  - name: Code example for 1.54 inch e-paper
    url: https://github.com/waveshare/e-Paper/blob/master/Arduino/epd1in54/epd1in54.ino
  - name: Arduino SPI
    url: https://www.arduino.cc/en/reference/SPI
---

The 4 non-SPI pins are defined in `epdif.h` file:

```c
#define RST_PIN         8
#define DC_PIN          9
#define CS_PIN          10
#define BUSY_PIN        7
```

The 2 [SPI pins for Arduino UNO](https://www.arduino.cc/en/reference/SPI) are defined as:

```c
MOSI  11
MISO  12
SCK   13
```
