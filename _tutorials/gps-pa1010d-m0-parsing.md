---
layout: tutorials
title: GPS parsing with PA1010D and M0
dependancies:
  - name: Arduino Core for SAMD
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
dev_board: RobotDyn M0 Mini
sensors:
  - GPS
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
chips:
  - PA1010D
features:
  - UART
  - Google Maps
video: S1ASB8kQ5Is
images:
  console: gps-pa1010d-m0-parsing-console.jpg
  prototype: gps-pa1010d-m0-i2c-prototype.jpg
references:
  - name: CDTop PA1010D GNSS patch antenna module Datasheet V.03
    url: https://drive.google.com/file/d/1O-9RGAwgs2fgtnzJRBa9eB1fAqJt7n_k/view
  - name: Adafruit PA1010D breakout board module
    url: https://www.adafruit.com/product/4415
  - name: Adafruit_GPS
    url: https://github.com/adafruit/Adafruit_GPS
  - name: Adafruit GPS Hardware serial parsing
    url: https://github.com/adafruit/Adafruit_GPS/blob/master/examples/GPS_HardwareSerial_Parsing/GPS_HardwareSerial_Parsing.ino
  - name: Adafruit GPS Hardware serial timing information
    url: https://github.com/adafruit/Adafruit_GPS/blob/master/examples/GPS_HardwareSerial_Timing/GPS_HardwareSerial_Timing.ino
  - name: Lat long conversion from degrees to decimal
    url: https://www.latlong.net/degrees-minutes-seconds-to-decimal-degrees

prerequisites:
  - name: Blinky Arduino M0
    url: ./blinky-m0
  - name: GPS PA1010D with Arduino M0
    url: ./gps-pa1010d-m0
---

Use GPS module PA1010D with Arduino M0 (SAMD21G) to display parsed GPS data with latitude and longitude in degrees.

### Using Google maps to view lat,long

1. Right click the spot on Google maps
1. Click "What's here?"
1. Click the lat,long in the card at the bottom
1. View the lat,long data in degrees and decimal at the left sidebar

![]({{ site.url }}/assets/images/tutorials/gps-pa1010d-m0-parsing-gmaps.jpg)
