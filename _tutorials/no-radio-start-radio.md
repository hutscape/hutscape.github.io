---
layout: tutorials
title: Sleep with radio disabled

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
dev_board: WeMos D1 Mini
chips:
  - ESP8266
features:
  - sleep
  - wakeup
  - radio
---

Sleep to wakeup without radio with `ESP.deepSleep(5000000, WAKE_RF_DISABLED);`, but on wakeup start the radio manually `WiFi.forceSleepWake()` after satisfying some conditions. This is done to save more battery as using the radio is expensive.
