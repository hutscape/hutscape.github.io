---
layout: components
title: Web USB send to browser
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
  - name: Web USB demo
    url: https://webusb.github.io/arduino/demos/console/
prerequisites:
  - name: Web USB detect
    url: ./webusb-detect
---

Send a simple sentence from the MCU to the browser on laptop.

Start the web browser code with `make server`.
