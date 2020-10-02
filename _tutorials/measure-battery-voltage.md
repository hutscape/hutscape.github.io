---
layout: tutorials
title: Measure battery voltage ESP8266
hardware:
  - esp8266
  - WeMos
  - LiPo
  - battery
  - voltage
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
