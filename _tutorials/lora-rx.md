---
layout: tutorials
title: LoRa RX

dependancies:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
prerequisites:
  - name: LoRa TX
    url: ./lora-tx
dev_board: Arduino UNO
features:
  - LoRa
  - RX

references:
  - name: Arduino LoRa firmware sender example
    url: https://github.com/sandeepmistry/arduino-LoRa/blob/master/examples/LoRaReceiver/LoRaReceiver.ino
  - name: SEMTech SX1276/77/78/79 datasheet
    url: https://www.mouser.com/datasheet/2/761/sx1276-1278113.pdf
  - name: Adafruit RFM95W LoRa Radio Transceiver Breakout
    url: https://www.adafruit.com/product/3072
---

Receive `hello` from a LoRa point with `433 MHz`. Use this with [transmitting from a LoRa point](lora-tx).
