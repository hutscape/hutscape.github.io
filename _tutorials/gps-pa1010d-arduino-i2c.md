---
layout: tutorials
title: GPS parsing via I2C
dependancies:
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
dev_board: Arduino UNO
chips:
  - PA1010D
sensors:
  - GPS
features:
  - I2C
video: S1ASB8kQ5Is
images:
  console: gps-pa1010d-arduino-i2c-console.png
  prototype: gps-pa1010d-arduino-i2c-prototype.JPG
  schematic: gps-pa1010d-arduino-i2c-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
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
---

Use Adafruit GPS module `PA1010D` with Arduino UNO raw NMEA sentences via the I2C protocol.
