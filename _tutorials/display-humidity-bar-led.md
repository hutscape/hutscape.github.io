---
layout: tutorials
title: Display humidity with bar LED
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: Adafruit DHT-sensor-library
    url: https://github.com/adafruit/DHT-sensor-library
chips:
  - ESP8266
  - 74HC595
  - Si7021
dev_board: WeMos D1 Mini
features:
  - bar LED
  - shift register
sensors:
  - humidity
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_AqH5EC
  - name: Adafruit Si7021 breakout board
    url: https://amzn.to/3juZr1l
  - name: BAR LED dip package
    url: https://amzn.to/3yv31ga
  - name: 74HC595 8-Bit Shift Register DIP-16 IC
    url: https://amzn.to/3DATGHs
images:
  schematic: display-humidity-bar-led-schematic.png
references:
  - name: DHT-sensor-library
    url: https://github.com/adafruit/DHT-sensor-library/blob/master/examples/DHTtester/DHTtester.ino
---

Display humidity with sensor `Si7021` in a bar graph LED display via a `74HC595` shift register.
