---
layout: tutorials
title: Erase WiFi credentials
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
chips:
  - ESP8266
firmware:
  - Arduino
dev_board: WeMos D1 Mini
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_ADRrXP

feature:
  - WiFi
---

Erase WiFi credentials stored in the WeMos board with `WiFi.disconnect()`.
