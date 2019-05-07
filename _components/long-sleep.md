---
layout: components
title: Long deep sleep
description: Sleep the ESP8266 for more than 20 minutes using the EEPROM count
code: long-sleep/long-sleep.ino
hardware:
  - esp8266
  - WeMos
  - sleep
  - EEPROM
---

Sleep for more than 1 hour using EEPROM to keep the count. Technically, this is not sleeping for more than 20 minutes, the maximum possible deep sleep, but it will keep a count every time it wakes up so that at the correct count, it will possibly enable the radio and do a desired task.

If only ESP8266 is used, short pin `D0` to pin `RST` to enable wakeup.

References:

- [ESP8266 maximum deep sleep](https://thingpulse.com/max-deep-sleep-for-esp8266/)
