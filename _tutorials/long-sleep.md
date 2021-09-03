---
layout: tutorials
title: Long deep sleep
dev_board: WeMos D1 Mini
prerequisites:
  - name: Wakeup after long sleep or button press
    url: ./long-sleep-or-button-press
chips:
  - ESP8266
features:
  - sleep
  - EEPROM
  - wakeup
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
references:
  - name: ESP8266 maximum deep sleep
    url: https://thingpulse.com/max-deep-sleep-for-esp8266

---

Sleep for more than 1 hour using EEPROM to keep the count. Technically, this is not sleeping for more than 20 minutes, the maximum possible deep sleep, but it will keep a count every time it wakes up so that at the correct count, it will possibly enable the radio and do a desired task.

If only ESP8266 is used, short pin `D0` to pin `RST` to enable wakeup.
