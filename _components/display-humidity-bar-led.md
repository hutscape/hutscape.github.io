---
layout: components
title: Display humidity with bar LED
hardware:
  - esp8266
  - WeMos
  - bar LED
  - 74HC595
  - shift register
  - Si7021
  - humidity
---

Display humidity with sensor `Si7021` in a bar graph LED display via a `74HC595` shift register.

![](/assets/images/components/display-humidity-bar-led-schematic.png)

Reference

- [DHT-sensor-library](https://github.com/adafruit/DHT-sensor-library/blob/master/examples/DHTtester/DHTtester.ino) from Adafruit
