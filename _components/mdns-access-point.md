---
layout: components
title: mDNS in AP mode
code: mdns-access-point/mdns-access-point.ino
hardware:
  - esp8266
  - WeMos
  - mdns
  - ap
---

Create an mDNS `http://cactus.local` in the Access Point to visit a created web page instead of `https://192.168.4.1` for easy user experience.

Only [Arduino ESP8266 `0da6906`](https://github.com/esp8266/Arduino/tree/0da6906499aaa9977f7b456c6ec32c090b117cef) tree works for mDNS in AP mode, so [install only the current master branch](https://github.com/esp8266/Arduino#using-git-version-basic-instructions).
