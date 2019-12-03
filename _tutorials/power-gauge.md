---
layout: tutorials
title: Power gauge
hardware:
  - arduino
  - uno
  - usb
  - power
  - gauge
references:
  - name: Adafruit USB Power Gauge Mini-Kit
    url: https://www.adafruit.com/product/1549
  - name: USB-Power-Gauge GitHub source code
    url: https://github.com/adafruit/USB-Power-Gauge
  - name: Adafruit USB Power Gauge Mini-Kit tutorial
    url: https://learn.adafruit.com/adafruit-usb-power-gauge-mini-kit/overview
has_code: false
---

Measure power consumption and current draw from a circuit. Three hardware is connected:

1. Arduino UNO (or any other USB connected circuit) to USB power gauge
1. [Adafruit USB Power Gauge](https://www.adafruit.com/product/1549) to a power source
1. USB to TTL to laptop for reading the serial console

Connect the USB power gauge to the USB-TTL board.

| | USB Power Gauge | USB-TTL Board |
| ------ | ------ | ------ |
| Connect | `GND`| `GND`|
| Connect | `TX`| `RX`
