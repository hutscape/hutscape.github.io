---
layout: tutorials
title: I2C Bus Scan for Sensors Si7021 and VCNL4000 with RPi pico
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
  - name: Adafruit Si7021 Temperature / Humidity sensor Dev Board
    url: https://learn.adafruit.com/adafruit-si7021-temperature-plus-humidity-sensor
  - name: Si70721 Temperature / Humidity datasheet
    url: https://www.silabs.com/documents/public/data-sheets/Si7021-A20.pdf
  - name: Adafruit VCNL4000 proximity sensor dev board
    url:
  - name: VCNL4000 datasheet
    url: https://cdn.sparkfun.com/datasheets/BreakoutBoards/vcnl4000.pdf
code: c
---

This example code does an I2C Bus Scan for the sensors `Si7021` and `VCNL4000`.

The datasheets of the 2 sensors below show that the serial monitor prints are in line with the information in the datasheet.

The I2C address for `Si7021` is `0x40`.
<img src="{{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-si7021.png" alt="Si7021 datasheet note on the I2C address">

The I2C address for `VCNL4000` is `0x13`.
<img src="{{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-vcnl4000.png" alt="VCNL4000 datasheet note on the I2C address">
