---
layout: tutorials
title: Waveshare 1.54 inch
hardware:
  - arduino
  - uno
  - waveshare
  - e-paper
  - e-ink
references:
  - name: Waveshare 1.54 inch e-paper module
    url: https://www.waveshare.com/product/1.54inch-e-Paper-Module.htm
  - name: Waveshare 1.54 inch e-paper schematic
    url: https://www.waveshare.com/w/upload/5/5b/1.54inch_e-Paper_Schematic.pdf
  - name: E-Ink Arduino library from Wavesgare
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
