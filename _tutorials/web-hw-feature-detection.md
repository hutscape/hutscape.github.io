---
layout: tutorials
title: Hardware Web API feature detection
hardware:
  - hardware
  - web
  - geolocation
  - ble
  - webusb
code: html
references:
  - name: Geolocation Web API specification
    url: https://www.w3.org/TR/geolocation-API/
  - name: Geolocation browser compatibility
    url: https://caniuse.com/geolocation
  - name: Web BLE API specification
    url: https://webbluetoothcg.github.io/web-bluetooth/
  - name: Web BLE browser compatibility
    url: https://caniuse.com/web-bluetooth
  - name: Web USB API specification
    url: https://wicg.github.io/webusb/
  - name: Web USB browser compatibility
    url: https://caniuse.com/webusb
---

This example contains feature detection code in JavaScript. Load the HTML file file via a server on different browsers to see whether geolocation, Web BLE and Web USB are supported.

## Chrome

<img src="{{ site.url }}/assets/images/tutorials/web-hw-feature-detection-chrome.png" alt="HW APIs availability on Chrome browser">

## Safari

<img src="{{ site.url }}/assets/images/tutorials/web-hw-feature-detection-safari.png" alt="HW APIs availability on Safari browser">
