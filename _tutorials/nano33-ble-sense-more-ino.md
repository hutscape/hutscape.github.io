---
layout: tutorials
title: Split up code into more ino files
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
sensors:
  - IMU
  - temperature
  - humidity
chips:
  - LSM9DS1
  - HTS221
references:
  - name: Arduino Nano 33 BLE Sense
    url: https://store.arduino.cc/usa/nano-33-ble-sense
  - name: Getting started with the Arduino NANO 33 BLE Sense
    url: https://www.arduino.cc/en/Guide/NANO33BLESense/
  - name: Simple Accelerometer example with LSM9DS1
    url: https://github.com/arduino-libraries/Arduino_LSM9DS1/blob/master/examples/SimpleAccelerometer/SimpleAccelerometer.ino
  - name: Read temperature and humidity with HTS221
    url: https://github.com/arduino-libraries/Arduino_HTS221/blob/master/examples/ReadSensors/ReadSensors.ino
prerequisites:
  - name: Blinky with Arduino Nano 33 BLE sense
    url: ./nano33-ble-sense
---

Display IMU, temperature and humidity data with Arduino board Nano 33 BLE Sense with IMU `LSM9DS1` and sensor `HTS221`.

Install the dependancy:

```sh
arduino-cli lib install Arduino_LSM9DS1
arduino-cli lib install Arduino_HTS221
```

Split up the code into various `*.ino` files with a folder structure like this:

```sh
$ tree
.
├── Makefile
├── imu.ino
├── nano33-ble-sense-more-ino.ino
└── sensor.ino
```
