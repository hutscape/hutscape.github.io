---
layout: tutorials
title: Seperate files into header and c++ files
dependancies:
  - name: Arduino MBed OS Nano Boards
    url: https://www.arduino.cc/en/Guide/NANO33BLESense
  - name: Simple Accelerometer LSM9DS1
    url: https://github.com/arduino-libraries/Arduino_LSM9DS1
  - name: Temperature and Humidity sensor HTS221
    url: https://github.com/arduino-libraries/Arduino_HTS221
firmware:
  - Arduino
dev_board: Arduino Nano 33 BLE Sense
components:
  - name: Arduino Nano 33 BLE Sense
    url: https://amzn.to/3kCFSmK
features:
  - imu
  - header
  - cpp
  - files
  - folders
images:
  console: nano33-ble-sense-imu-sensors-console.png
references:
  - name: Arduino Nano 33 BLE Sense
    url: https://store.arduino.cc/usa/nano-33-ble-sense
  - name: Getting started with the Arduino NANO 33 BLE Sense
    url: https://www.arduino.cc/en/Guide/NANO33BLESense/
  - name: Simple Accelerometer example with LSM9DS1
    url: https://github.com/arduino-libraries/Arduino_LSM9DS1/blob/master/examples/SimpleAccelerometer/SimpleAccelerometer.ino
prerequisites:
  - name: Blinky with Arduino Nano 33 BLE sense
    url: ./nano33-ble-sense
  - name: Display IMU data with LSM9DS1
    url: ./nano33-ble-sense-imu
  - name: Display temperature and humidity data with HTS221
    url: ./nano33-ble-sense-temperature-humidity
---

Learn how to split long files into several header and cpp files for better code organization. The final directory structure will look like this:

```
$ tree
.
├── Imu.cpp
├── Imu.h
├── Makefile
├── Sensor.cpp
├── Sensor.h
└── nano33-ble-sense-imu-sensors.ino

0 directories, 6 files
```

Install the dependancies:

```sh
arduino-cli lib install Arduino_LSM9DS1
arduino-cli lib install Arduino_HTS221
```
