---
layout: tutorials
title: POST request to IFTTT
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
  - name: GET request to IFTTT
    url: ./ifttt-get
chips:
  - ESP8266
dev_board: WeMos D1 Mini
features:
  - IFTTT
---

Send a `POST` request to IFTTT cloud. Ensure IFTTT is first setup via the [Webhooks](https://ifttt.com/maker_webhooks) and the get the [webhook key](https://ifttt.com/services/maker_webhooks/settings).
