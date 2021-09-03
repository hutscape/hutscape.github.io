---
layout: tutorials
title: Display temperature and humidity data with HTS221

dependancies:
  - name: Arduino MBed OS Nano Boards
    url: https://www.arduino.cc/en/Guide/NANO33BLESense
  - name: Temperature and Humidity sensor HTS221
    url: https://github.com/arduino-libraries/Arduino_HTS221
firmware:
  - Arduino
dev_board: Arduino Nano 33 BLE Sense
components:
  - name: Arduino Nano 33 BLE Sense
    url: https://amzn.to/3kCFSmK
sensors:
  - temperature
  - humidity
chips:
  - HTS221
images:
  console: nano33-ble-sense-temperature-humidity-console.png
references:
  - name: Arduino Nano 33 BLE Sense
    url: https://store.arduino.cc/usa/nano-33-ble-sense
  - name: Getting started with the Arduino NANO 33 BLE Sense
    url: https://www.arduino.cc/en/Guide/NANO33BLESense/
  - name: Read temperature and humidity with HTS221
    url: https://github.com/arduino-libraries/Arduino_HTS221/blob/master/examples/ReadSensors/ReadSensors.ino
prerequisites:
  - name: Blinky with Arduino Nano 33 BLE sense
    url: ./nano33-ble-sense
---

Display temperature and humidity values with sensor `HTS221` on Arduino Nano 33 BLE Sense board.

Install the dependancy:

```sh
arduino-cli lib install Arduino_HTS221
```
