---
layout: tutorials
title: Waveshare 1.54 inch with Arduino Zero

dependancies:
  - name: Arduino core for SAMD
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Waveshare e-paper for epd1in54 V1
    url: https://github.com/waveshare/e-Paper/tree/master/Arduino/epd1in54
  - name: Waveshare e-paper for epd1in54 V2
    url: https://github.com/waveshare/e-Paper/tree/master/Arduino/epd1in54_V2
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
  - name: WaveShare 1.54in E-Ink module V1
    url: https://amzn.to/3n7gLtk
firmware:
  - Arduino
video: yMfmGHV5mbg
chips:
  - SAMD21
  - Waveshare
dev_board: RobotDyn M0 mini
video: enfliRlCYbc
features:
  - e-paper
  - e-ink
  - SPI
versions:
  - name: e-paper
    version: 1
images:
  console: waveshare-1in54-e-paper-samd21g-console.png
  prototype: waveshare-1in54-e-paper-samd21g-prototype.JPG
  schematic: waveshare-1in54-e-paper-samd21g-schematic.png
references:
  - name: Waveshare 1.54 inch e-paper module
    url: https://www.waveshare.com/product/1.54inch-e-Paper-Module.htm
  - name: Waveshare 1.54 inch e-paper schematic
    url: https://www.waveshare.com/w/upload/5/5b/1.54inch_e-Paper_Schematic.pdf
  - name: E-Ink Arduino library
    url: https://github.com/soonuse/epd-library-arduino
  - name: Code example for 1.54 inch e-paper
    url: https://github.com/waveshare/e-Paper/blob/master/Arduino/epd1in54/epd1in54.ino
  - name: Arduino SPI
    url: https://www.arduino.cc/en/reference/SPI
prerequisites:
  - name: Waveshare 1.54 inch V2.1 with Arduino Zero
    url: ./waveshare-1in54-v2-e-paper-samd21g
---

## Version

Check the version of the Waveshare module and use the example code for [version 1](https://github.com/waveshare/e-Paper/tree/master/Arduino/epd1in54) and [version 2](https://github.com/waveshare/e-Paper/tree/master/Arduino/epd1in54_V2) accordingly.

## SPI

The 4 non-SPI pins are defined in `epdif.h` file:

```c
#define RST_PIN         8
#define DC_PIN          9
#define CS_PIN          10
#define BUSY_PIN        7
```

The SPI pins for Arduino M0 / SAMD21G are defined as following:

| SAMD21G Pin | I/O Pin | SERCOM-ALT | Name |
| ------ | ------ | ------ | ------ |
| `19` | `PB10` | `SERCOM4/PAD[2]` | MOSI |
| `20` | `PB11` | `SERCOM4/PAD[3]` | SCK |

![]({{ site.url }}/assets/images/tutorials/lora-duplex-samd21g-pin-mux.png)

## Pins

| Arduino Zero | Waveshare E-Ink module | SAMD21G
| ------ | ------ | ------
| D7 | BUSY | PA21
| D8 | RST | PA06
| D9 | DC | PA07
| D10 | CS | PA18
| CLK | SCK on ICSP connector | PB11
| DIN | COPI on ISCP connector | PB10

![]({{ site.url }}/assets/images/tutorials/waveshare-1in54-e-paper-samd21g-pinout.png)
