---
layout: tutorials
title: Haversine forumla in Arduino

dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-DOWDQ6
dev_board: LilyGO T-Beam
images:
  console: haversine-console.png
components:
  - name: TTGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
references:
  - name: Rosetta code Haversine formula
    url: https://rosettacode.org/wiki/Haversine_formula#C
video: Kgxx7jivSes
prerequisites:
  - name: Blinky for ESP32 LilyGO T-Beam
    url: ./blinky-esp32-t-beam
---

This example contains the Haversine implement in Arduino. 3 Lat-Long values were picked up from Google Maps and cross-checked with the Arduino implementation result.

E.g. Distance between Reichstag and Brandenburg Gate in Berlin

![]({{ site.url }}/assets/images/tutorials/haversine-google-maps.png)
