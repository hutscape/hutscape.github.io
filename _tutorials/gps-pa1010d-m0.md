---
layout: tutorials
title: GPS PA1010D with M0 UART
dependancies:
  - name: Arduino Core for SAMD
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
dev_board: RobotDyn M0 Mini
sensors:
  - GPS
chips:
  - PA1010D
video: S1ASB8kQ5Is
features:
  - UART
images:
  console: gps-pa1010d-m0-console.png
  prototype: gps-pa1010d-m0-prototype.JPG
  schematic: gps-pa1010d-m0-schematic.png
references:
  - name: CDTop PA1010D GNSS patch antenna module Datasheet V.03
    url: https://drive.google.com/file/d/1O-9RGAwgs2fgtnzJRBa9eB1fAqJt7n_k/view
  - name: Adafruit PA1010D breakout board module
    url: https://www.adafruit.com/product/4415
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
  - name: Adafruit GPS Hardware serial echo test
    url: https://github.com/adafruit/Adafruit_GPS/blob/master/examples/GPS_HardwareSerial_EchoTest/GPS_HardwareSerial_EchoTest.ino
---

Use GPS module PA1010D with Arduino M0 (SAMD21G) to display GPS data.
