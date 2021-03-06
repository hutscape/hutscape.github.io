---
layout: tutorials
title: Waveshare 1.54 inch with SAMD21G
hardware:
  - arduino
  - m0
  - samd21g
  - waveshare
  - e-paper
  - e-ink
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
---

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

<img src="{{ site.url }}/assets/images/tutorials/lora-duplex-samd21g-pin-mux.png" alt="">
