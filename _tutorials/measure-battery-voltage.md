---
layout: tutorials
title: Measure battery voltage ESP8266

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
  - esp8266
features:
  - LiPo
  - battery
  - voltage
images:
  browser: measure-battery-voltage-browser.png
references:
  - name: Monitoring LiPo battery voltage with Wemos D1 mini battery shield and Thingspeak
    url: https://arduinodiy.wordpress.com/2016/12/25/monitoring-lipo-battery-voltage-with-wemos-d1-minibattery-shield-and-thingspeak
---

Measure the LiPo battery voltage and ping that value to the cloud.

Connect `100k` resistor from `A0` to JST connector's positive terminal of the WeMos battery shield.

Instructions:

1. Power via LiPo through the JST connector on the WeMos battery shield and not via the USB power on the WeMos
1. Connect to access point `Cactus XXXX` with password `hutscape`
1. Get the current battery voltage by accessing `cactus.local`
