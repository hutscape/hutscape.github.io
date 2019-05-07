---
layout: components
title: Sleep with radio disabled and wakeup to use radio
code: no-radio-start-radio/no-radio-start-radio.ino
hardware:
  - esp8266
  - sleep
  - wakeup
  - radio
---

Sleep to wakeup without radio with `ESP.deepSleep(5000000, WAKE_RF_DISABLED);`, but on wakeup start the radio manually `WiFi.forceSleepWake()` after satisfying some conditions. This is done to save more battery as using the radio is expensive.
