---
layout: tutorials
title: DHT22 sensor
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
chips:
  - ESP8266
  - DHT22
sensors:
  - temperature
  - humidity
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_ADRrXP
  - name: DHT22 Temperature / humidity sensor
    url: https://amzn.to/3t1R6oT
  - name: 10ohm Through-Hole resistor
    url: https://amzn.to/3ypS8fz
dev_board: WeMos D1 Mini
images:
  schematic: dht22-sensor-schematic.png
references:
  - name: DHT sensor library
    url: https://github.com/adafruit/DHT-sensor-library/blob/master/examples/DHTtester/DHTtester.ino
---

Display humidity and temperature every second with `DHT22` sensor
