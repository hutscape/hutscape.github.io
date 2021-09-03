---
layout: tutorials
title: Web USB receive from browser

dependancies:
  - name: WebUSB Compatible Arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
  - name: Web USB LED
    url: ./webusb-led
firmware:
  - Arduino
chips:
  - SAMD21
dev_board: RobotDyn M0 mini
video: xV1l5SdE8sk
features:
  - WebUSB

references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of USB IDs
    url: http://www.linux-usb.org/usb.ids
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
  - name: Web USB demo
    url: https://webusb.github.io/arduino/demos/console/
  - name: Web USB serial.js
    url: https://github.com/webusb/arduino/blob/gh-pages/demos/serial.js
prerequisites:
  - name: Web USB detect
    url: ./webusb-detect
---

Turn on/off LED on-board [compatible arduino hardware](https://github.com/webusb/arduino#compatible-hardware) through the commands received `H` and `L` from the browser on the laptop which is connected to the hardware.

Use this firmware with the [browser code](./webusb-led).
