---
layout: components
title: Web BLE Read changing values
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - UV
  - BLE
code: html
references:
  - name: Web Bluetooth / Read Characteristic Value Changed Sample
    url: https://googlechrome.github.io/samples/web-bluetooth/read-characteristic-value-changed.html
prerequisites:
  - name: Web BLE
    url: ./web-ble
  - name: Can I Use Web BLE?
    url: https://caniuse.com/#feat=web-bluetooth
---

Connect to a BLE device with BLE GATT Service of **Environmental Sensing** and BLE GATT Characteristic of **UV Index** and read the values from the Chrome browser console when the readings are updated.
