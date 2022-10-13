---
layout: tutorials
title: Periodic wakeup
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
chips:
  - ESP8266
dev_board: WeMos D1 Mini
features:
  - wakeup
  - periodic
images:
  settings: wakeup-periodically-arduino-settings.png
prerequisites:
  - name: Blinky ESP8266
    url: ./blinky-esp8266
---

Wake up periodically after a specified time. Short `RST` and `GPIO012` on ESP (or `D6` on WeMos).
