---
layout: tutorials
title: Display IMU data with LSM9DS1

dependancies:
  - name: Arduino MBed OS Nano Boards
    url: https://www.arduino.cc/en/Guide/NANO33BLESense
  - name: Simple Accelerometer LSM9DS1
    url: https://github.com/arduino-libraries/Arduino_LSM9DS1

firmware:
  - Arduino
dev_board: Arduino Nano 33 BLE Sense
components:
  - name: Arduino Nano 33 BLE Sense
    url: https://amzn.to/3kCFSmK
chips:
  - LSM9DS1
sensors:
  - IMU
images:
  console: blinky-nano33-ble-sense-imu-console.png
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
---

Display IMU data with Arduino board Nano 33 BLE Sense with IMU `LSM9DS1`.

Install the dependancy:

```sh
arduino-cli lib install Arduino_LSM9DS1
```
