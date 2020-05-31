---
layout: tutorials
title: GPS parsing with PA1010D and M0
hardware:
  - GPS
  - PA1010D
  - UART
  - M0
references:
  - name: CDTop PA1010D GNSS patch antenna module Datasheet V.03
    url: https://drive.google.com/file/d/1O-9RGAwgs2fgtnzJRBa9eB1fAqJt7n_k/view
  - name: Adafruit PA1010D breakout board module
    url: https://www.adafruit.com/product/4415
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
  - name: Adafruit GPS Hardware serial parsing
    url: https://github.com/adafruit/Adafruit_GPS/blob/master/examples/GPS_HardwareSerial_Parsing/GPS_HardwareSerial_Parsing.ino
  - name: Lat long conversion from degrees to decimal
    url: https://www.latlong.net/degrees-minutes-seconds-to-decimal-degrees
prerequisites:
  - name: GPS PA10101 with Arduino M0
    url: ./gps-pa1010d-m0
---

Use GPS module PA1010D with Arduino M0 (SAMD21G) to display parsed GPS data with latitude and longitude in degrees.
