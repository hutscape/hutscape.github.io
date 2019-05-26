---
layout: components
title: Wakeup periodically after maximum sleep to ping the cloud
hardware:
  - esp8266
  - WeMos
  - sleep
  - wakeup
  - cloud
  - ifttt
references:
  - name: Max deep sleep for ESP8266
    url: https://thingpulse.com/max-deep-sleep-for-esp8266/
---

After sleeping for a maximum period `ESP.deepSleep(ESP.deepSleepMax())`, the ESP8266 wakes up to send a ping to IFTTT cloud.

Pre-requisites:

1. [Max deep sleep](./max-deep-sleep)
1. [GET request to IFTTT](./ifttt-get)
