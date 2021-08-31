---
layout: tutorials
title: Power gauge
dev_board: Arduino UNO
tool: USB Power gauge
features:
  - usb
  - power
  - gauge
images:
  console: power-gauge-console.png
  prototype: power-gauge-prototype.jpg
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: Adafruit power gauge mini kit
    url: https://www.adafruit.com/product/1549
  - name: USB to UART CP2102 board
    url: https://s.click.aliexpress.com/e/_9v08HQ
references:
  - name: Adafruit USB Power Gauge Mini-Kit
    url: https://www.adafruit.com/product/1549
  - name: USB-Power-Gauge GitHub source code
    url: https://github.com/adafruit/USB-Power-Gauge
  - name: Adafruit USB Power Gauge Mini-Kit tutorial
    url: https://learn.adafruit.com/adafruit-usb-power-gauge-mini-kit/overview
has_code: false
---

Measure power consumption and current draw from a circuit.

Connect the USB power gauge to the USB-TTL board.

| | USB Power Gauge | USB-TTL Board |
| ------ | ------ | ------ |
| Connect | `GND`| `GND`|
| Connect | `TX`| `RX`
