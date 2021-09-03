---
layout: tutorials
title: Sensor Si7021 with ESP8266

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: Adafruit Si7021
    url: https://github.com/adafruit/Adafruit_Si7021
dev_board: WeMos D1 Mini
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
  - name: Adafruit Si7021 board
    url: https://amzn.to/3t47EvE
chips:
  - ESP8266
  - Si7021
sensors:
  - temperature
  - humidity
images:
  schematic: sensor-si7021-schematic.png
references:
  - name: Si7021 example code
    url: https://github.com/adafruit/Adafruit_Si7021/blob/master/examples/si7021/si7021.ino
---

Display humidity and temperature values with sensor `Si7021` and ESP8266.
