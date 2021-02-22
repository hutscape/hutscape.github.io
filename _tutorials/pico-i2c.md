---
layout: tutorials
title: I2C Bus Scan for Sensor Si7021 with RPi pico
hardware:
  - raspberrypi
  - rpi
  - pico
  - rp2040
  - c/c++
  - i2c
  - Si7021
references:
  - name: Pico I2C Bus Scan example code
    url: https://github.com/raspberrypi/pico-examples/blob/master/i2c/bus_scan/bus_scan.c
  - name: Adafruit Si7021 Dev Board
    url: https://learn.adafruit.com/adafruit-si7021-temperature-plus-humidity-sensor
  - name: Si70721 Temperature / Humidity datasheet
    url: https://www.silabs.com/documents/public/data-sheets/Si7021-A20.pdf
code: c
---

This example code does an I2C Bus Scan for the sensor `Si7021` and returns the answer `0x40`.

<img src="{{ site.url }}/assets/images/tutorials/pico-i2c-datasheet.png" alt="Si7021 datasheet note on the I2C address">
