---
layout: components
title: Wakeup after long sleep or button press
hardware:
  - esp8266
  - WeMos
  - EEPROM
  - button
  - sleep
  - wakeup
---

Wakeup periodically after long sleep (more than 1 hour) or on button press. ESP8266 will wake up after 23 minutes even if the time set is more than that because of timer limits.
