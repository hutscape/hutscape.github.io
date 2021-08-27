---
layout: tutorials
title: Web USB detect device
dependancies:
  - name: List of compatible Arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
tool: Chrome web browser
features:
  - WebUSB
code: html
images:
  browser: webusb-detect-browser.png
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of USB IDs
    url: http://www.linux-usb.org/usb.ids

---

Connect to a compatible USB device and detect it on the browser. Check `lsusb` on Linux or `system_profiler SPUSBDataType` on MacOSX for **Vendor ID** and **Product ID**.
