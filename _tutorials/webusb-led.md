---
layout: tutorials
title: Web USB LED

dependancies:
  - name: WebUSB Compatible Arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
  - name: Web USB receive
    url: ./webusb-receive
firmware:
  - Arduino
chips:
  - SAMD21
dev_board: RobotDyn M0 mini

features:
  - WebUSB
images:
  browser: webusb-led-browser.png
code: html
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
  - name: Web USB serial.js
    url: https://github.com/webusb/arduino/blob/gh-pages/demos/serial.js
prerequisites:
  - name: Web USB detect
    url: ./webusb-detect
---

Turn on/off LED on-board [compatible arduino hardware](https://github.com/webusb/arduino#compatible-hardware) through a button press in the browser on the laptop which is connected to the hardware.

Use this firmware with the [mcu firmware](./webusb-receive).
