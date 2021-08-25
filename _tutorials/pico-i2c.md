---
layout: tutorials
title: I2C Bus Scan with RPi pico

dependancies:
  - name: Pico toolchain
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
dev_board: RaspberryPI Pico
chips:
  - RP2040
  - Si7021
  - VCNL4000
firmware:
  - C
  - C++
feature:
  - I2C

prerequisites:
  - name: Blinky Pico
    url: ./blinky-pico
references:
  - name: Pico I2C Bus Scan example code
    url: https://github.com/raspberrypi/pico-examples/blob/master/i2c/bus_scan/bus_scan.c
  - name: Adafruit Si7021 Temperature / Humidity sensor Dev Board
    url: https://learn.adafruit.com/adafruit-si7021-temperature-plus-humidity-sensor
  - name: Si70721 Temperature / Humidity datasheet
    url: https://www.silabs.com/documents/public/data-sheets/Si7021-A20.pdf
  - name: Adafruit VCNL4000 proximity sensor dev board
    url: https://www.adafruit.com/product/466
  - name: VCNL4000 datasheet
    url: https://cdn.sparkfun.com/datasheets/BreakoutBoards/vcnl4000.pdf
code: c
---

This example code does an I2C Bus Scan for the sensors `Si7021` and `VCNL4000`.

The datasheets of the 2 sensors below show that the serial monitor prints are in line with the information in the datasheet.

The I2C address for `Si7021` is `0x40`.
<img src="{{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-si7021.png" alt="Si7021 datasheet note on the I2C address">

The I2C address for `VCNL4000` is `0x13`.
<img src="{{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-VCNL4000.png" alt="VCNL4000 datasheet note on the I2C address">
