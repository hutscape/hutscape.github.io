---
layout: tutorials
title: Blinky with ESPHome ESP32S3
dependancies:
  - name: ESPHome
    url: https://esphome.io/guides/installing_esphome.html
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  prototype: hello-esp32s3-prototype.jpg
features:
  - esphome
  - esp32s3
  - blinky
code: yaml
prerequisites:
  - name: Hello world with ESPHome
    url: ./hello-esphome
references:
  - name: Blink How?
    url: https://community.home-assistant.io/t/blink-how/307243/16
  - name: Enable USB CDC to log “hello world” to ESP32-S3 dev board for ESPHome
    url: https://community.home-assistant.io/t/enable-usb-cdc-to-log-hello-world-to-esp32-s3-dev-board-for-esphome/463164
---

Compiling and uploading is successful!

<!-- TODO: Serial print is not working -->
<h3 class="has-background-warning-light">TODO: BLINKY NOT SHOWING</h3>