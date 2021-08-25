---
layout: tutorials
title: LoRa Duplex A
dev_board: Arduino UNO
dependancies:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
features:
  - lora
  - duplex
references:
  - name: Arduino LoRa firmware duplex example
    url: https://github.com/sandeepmistry/arduino-LoRa/blob/master/examples/LoRaDuplex/LoRaDuplex.ino
  - name: SEMTech SX1276/77/78/79 datasheet
    url: https://www.mouser.com/datasheet/2/761/sx1276-1278113.pdf
  - name: Adafruit RFM95W LoRa Radio Transceiver Breakout
    url: https://www.adafruit.com/product/3072
---

Send and receive at the same time from another node! Use this code with [duplex b](lora-duplex-b).

```c
byte localAddress = 0xBB;
byte destination = 0xFF;
```
