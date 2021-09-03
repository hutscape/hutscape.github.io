---
layout: tutorials
title: mDNS in AP mode

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 Arduino libraries
    url: https://github.com/esp8266/Arduino/tree/master/libraries
dev_board: WeMos D1 Mini
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
chips:
  - ESP8266
features:
  - mDNS
  - Access point
---

Create an mDNS `http://cactus.local` in the Access Point to visit a created web page instead of `https://192.168.4.1` for easy user experience.

Only [Arduino ESP8266 `0da6906`](https://github.com/esp8266/Arduino/tree/0da6906499aaa9977f7b456c6ec32c090b117cef) tree works for mDNS in AP mode, so [install only the current master branch](https://github.com/esp8266/Arduino#using-git-version-basic-instructions).
