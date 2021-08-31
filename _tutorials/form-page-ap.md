---
layout: tutorials
title: Form page in AP
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
chips:
  - ESP8266
dev_board: WeMos D1 Mini
features:
  - WiFi
  - access point
  - form
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_ADRrXP
---

Fill up a form accessible only in AP (access point) mode, and get redirected to a success page.

Use `make upload` to flash the firmware to the ESP8266.
