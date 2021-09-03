---
layout: tutorials
title: Maximum deep sleep
dev_board: WeMos D1 mini
chips:
  - ESP8266
features:
  - sleep
  - wakeup
images:
  console: max-deep-sleep-console.png
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
references:
  - name: Max deep sleep for ESP8266
    url: https://thingpulse.com/max-deep-sleep-for-esp8266/
---

How long can ESP8266 sleep? This firmware code will test it out.

If only ESP8266 is used, short pin `D0` to pin `RST` to enable wakeup. Then connect the USB power to a WeMos module, open the serial monitor and wait for the console to show wakeup.

It wakes up about **3 hours, 45 minutes** later.
