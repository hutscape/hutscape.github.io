---
layout: tutorials
title: GET request to IFTTT
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_AoFecc
prerequisites:
  - name: Blinky with ESP8266
    url: ./blinky-esp8266
chips:
  - ESP8266
dev_board: WeMos D1 Mini
features:
  - IFTTT
---

Send a `GET` request to IFTTT periodically with WeMos after connecting it to the WiFi.
