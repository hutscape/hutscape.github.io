---
layout: components
title: Web USB LED
hardware:
  - M0
  - webusb
  - arduino
  - samd21
code: html
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
prerequisites:
  - name: Web USB send and receive
    url: ./webusb-send-receive
---

Turn on/off LED on-board [compatible arduino hardware](https://github.com/webusb/arduino#compatible-hardware) through a button press in the browser on the laptop which is connected to the hardware.

Use this firmware with the [mcu firmware](./webusb-send-receive).
