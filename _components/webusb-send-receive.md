---
layout: components
title: Web USB send and receive
hardware:
  - M0
  - webusb
  - arduino
  - samd21
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of USB IDs
    url: http://www.linux-usb.org/usb.ids
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
prerequisites:
  - name: Web USB LED
    url: ./webusb-led
---

Turn on/off LED on-board [compatible arduino hardware](https://github.com/webusb/arduino#compatible-hardware) through the commands received `H` and `L` from the browser on the laptop which is connected to the hardware.

Use this firmware with the [browser code](./webusb-led).
