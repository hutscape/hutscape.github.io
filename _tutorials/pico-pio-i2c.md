---
layout: tutorials
title: PIO I2C Bus Scan with Pico

dependancies:
  - name: Pico toolchain
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
dev_board: RaspberryPI Pico
components:
  - name: Raspberry PI Pico
    url: https://amzn.to/3sKa5Cv
chips:
  - RP2040
  - Si7021
  - VCNL4000
firmware:
  - C
  - C++
feature:
  - I2C
  - PIO
images:
  console: pico-pio-i2c-console.png
  prototype: pico-pio-i2c-prototype.png
  schematic: pico-pio-i2c-schematic.png
prerequisites:
  - name: Blinky Pico
    url: ./blinky-pico
  - name: I2C Bus Scan with RPi pico
    url: ./pico-i2c
references:
  - name: PIO Pico I2C Bus Scan example code
    url: https://github.com/raspberrypi/pico-examples/tree/master/pio/i2c
  - name: Adafruit Si7021 Temperature / Humidity sensor Dev Board
    url: https://learn.adafruit.com/adafruit-si7021-temperature-plus-humidity-sensor
  - name: Si70721 Temperature / Humidity datasheet
    url: https://www.silabs.com/documents/public/data-sheets/Si7021-A20.pdf
  - name: Adafruit VCNL4000 proximity sensor dev board
    url: https://www.adafruit.com/product/466
  - name: VCNL4000 datasheet
    url: https://cdn.sparkfun.com/datasheets/BreakoutBoards/vcnl4000.pdf
code: c
source_code_path: pico-pio-i2c.c
---

This example code does an I2C Bus Scan for the sensors `Si7021` and `VCNL4000` with PIO.

The datasheets of the 2 sensors below show that the serial monitor prints are in line with the information in the datasheet.

The I2C address for `Si7021` is `0x40`.
![]({{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-si7021.png)

The I2C address for `VCNL4000` is `0x13`.
![]({{ site.url }}/assets/images/tutorials/pico-i2c-datasheet-VCNL4000.png)
