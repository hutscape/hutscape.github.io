---
layout: tutorials
title: GPS parsing with M0 I2C
dependancies:
  - name: Arduino Core for SAMD
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
dev_board: RobotDyn M0 Mini
sensors:
  - GPS
chips:
  - PA1010D
video: S1ASB8kQ5Is
features:
  - I2C
images:
  console: gps-pa1010d-m0-i2c-console.png
  prototype: gps-pa1010d-m0-i2c-prototype.jpg
  schematic: gps-pa1010d-m0-i2c-schematic.png
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
references:
  - name: CDTop PA1010D GNSS patch antenna module Datasheet V.03
    url: https://drive.google.com/file/d/1O-9RGAwgs2fgtnzJRBa9eB1fAqJt7n_k/view
  - name: Adafruit PA1010D breakout board module
    url: https://www.adafruit.com/product/4415
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
  - name: Adafruit GPS I2C echo test
    url: https://raw.githubusercontent.com/adafruit/Adafruit_GPS/master/examples/GPS_I2C_EchoTest/GPS_I2C_EchoTest.ino
  - name: Adafruit Mini GPS PA1010D schematic
    url: https://cdn-learn.adafruit.com/assets/assets/000/084/182/original/adafruit_products_Mini_GPS_PA1010D_SCh.png?1573765781
prerequisites:
  - name: Blinky Arduino M0
    url: ./blinky-m0
  - name: GPS PA1010D with Arduino M0
    url: ./gps-pa1010d-m0

---

Use Adafruit GPS module PA1010D with Arduino M0 (with micro-controller SAMD21G) to display parsed GPS data via the I2C protocol.
