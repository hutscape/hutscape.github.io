---
layout: tutorials
title: GPS logging with PA1010D and M0

dependancies:
  - name: Arduino Core for SAMD
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS

dev_board: RobotDyn M0 Mini
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
sensors:
  - GPS
chips:
  - PA1010D
features:
  - UART
video: S1ASB8kQ5Is
images:
  console: gps-pa1010d-m0-logging-console.png
  prototype: gps-pa1010d-m0-i2c-prototype.jpg
references:
  - name: CDTop PA1010D GNSS patch antenna module Datasheet V.03
    url: https://drive.google.com/file/d/1O-9RGAwgs2fgtnzJRBa9eB1fAqJt7n_k/view
  - name: Adafruit PA1010D breakout board module
    url: https://www.adafruit.com/product/4415
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
  - name: Adafruit GPS Hardware serial LOCUS start
    url: https://github.com/adafruit/Adafruit_GPS/blob/master/examples/GPS_HardwareSerial_LOCUS_Start/GPS_HardwareSerial_LOCUS_Start.ino

prerequisites:
  - name: Blinky Arduino M0
    url: ./blinky-m0
  - name: GPS PA1010D with Arduino M0
    url: ./gps-pa1010d-m0
---

Use GPS module PA1010D with Arduino M0 to turn on the LOCUS built-in datalogger.
