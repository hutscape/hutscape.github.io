---
layout: tutorials
title: Wakeup after long sleep or button press

dev_board: WeMos D1 Mini
chips:
  - ESP8266
features:
  - EEPROM
  - button
  - sleep
  - wakeup
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
images:
  schematic: long-sleep-or-button-press-schematic.png
prerequisites:
  - name: Blinky ESP8266
    url: ./blinky-esp8266
---

Wakeup periodically after long sleep (more than 1 hour) or on button press. ESP8266 will wake up after 23 minutes even if the time set is more than that because of timer limits.
