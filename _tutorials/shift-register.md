---
layout: tutorials
title: Shift register

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
dev_board: WeMos D1 Mini
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
  - name: 74HC595 8-Bit Shift Register DIP-16 IC
    url: https://amzn.to/3DATGHs
chips:
  - ESP8266
  - 74HC595
features:
  - shift register
  - bar led
images:
  schematic: shift-register-schematic.png
prerequisites:
  - name: Blinky ESP8266
    url: ./blinky-esp8266
---

Display LED as a bar graph going from 1 LED ON to all 5 LEDs ON.
