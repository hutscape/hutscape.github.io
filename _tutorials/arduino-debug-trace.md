---
layout: tutorials
title: Arduino debugging and tracing
dependancies:
  - name: ArduinoTrace
    url: https://github.com/bblanchon/ArduinoTrace
firmware:
  - Arduino
dev_board: Arduino M0
chips:
  - SAMD21
features:
  - debug
  - trace
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
