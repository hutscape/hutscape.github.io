---
layout: components
title: Web USB detect device
hardware:
  - webusb
  - arduino
code: html
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of USB IDs
    url: http://www.linux-usb.org/usb.ids
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
---

Connect to a compatible USB device and detect it on the browser. Check `lsusb` on Linux or `system_profiler SPUSBDataType` on MacOSX for **Vendor ID** and **Product ID**.
