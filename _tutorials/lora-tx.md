---
layout: tutorials
title: LoRa TX

dependancies:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
prerequisites:
  - name: LoRa RX
    url: ./lora-rx
dev_board: Arduino UNO
features:
  - LoRa
  - TX
  - SPI
images:
  console: lora-tx-console.png
  prototype: lora-tx-prototype.jpg
  schematic: lora-tx-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: Adafruit RFM95 LoRa breakout board
    url: https://amzn.to/3ywGJdZ
  - name: Small breadboard
    url: https://amzn.to/3gKy0hW
video: tO1hYr6hNa4
references:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
  - name: Arduino LoRa firmware sender example
    url: https://github.com/sandeepmistry/arduino-LoRa/blob/master/examples/LoRaSender/LoRaSender.ino
  - name: SEMTech SX1276/77/78/79 datasheet
    url: https://www.mouser.com/datasheet/2/761/sx1276-1278113.pdf
  - name: Adafruit RFM95W LoRa Radio Transceiver Breakout
    url: https://www.adafruit.com/product/3072
---

Transmit from a LoRa point with `433 MHz`. Use this with [receiving from a LoRa point](lora-rx).
