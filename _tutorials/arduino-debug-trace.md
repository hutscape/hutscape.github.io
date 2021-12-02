---
layout: tutorials
title: Print debug and trace info with a libary, header file and ifdef
dependancies:
  - name: ArduinoTrace
    url: https://github.com/bblanchon/ArduinoTrace
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
video: 7kRlQDxGR9A
firmware:
  - Arduino
dev_board: Arduino M0
images:
  prototype: blinky-m0-prototype.jpg
  console: arduino-debug-trace-console.png
chips:
  - SAMD21
features:
  - debug
  - trace
  - print
  - dump
  - library
  - ifdef
  - header
references:
  - name: ArduinoTrace library
    url: https://github.com/bblanchon/ArduinoTrace
  - name: Toggling Debug Code
    url: https://forum.arduino.cc/index.php?topic=46900.msg338645#msg338645
prerequisites:
  - name: Arduino debugging
    url: ./arduino-debug
  - name: Arduino trace
    url: ./arduino-trace
---

Combing `#ifdef` with a header file and `ArduinoTrace` library to setup toggling on and off for debugging Arduino code.
