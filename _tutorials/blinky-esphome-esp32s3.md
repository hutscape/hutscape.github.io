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
  prototype: blinky-esp32s3-gpio5.jpg
  console: blinky-esphome-esp32s3-console.png
  schematic: blinky-arduino-esp32s3-schematic.png
features:
  - esphome
  - esp32s3
  - blinky
code: yaml
prerequisites:
  - name: Hello world with ESPHome
    url: ./hello-esphome
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Blink How?
    url: https://community.home-assistant.io/t/blink-how/307243/16
  - name: Enable USB CDC to log “hello world” to ESP32-S3 dev board for ESPHome
    url: https://community.home-assistant.io/t/enable-usb-cdc-to-log-hello-world-to-esp32-s3-dev-board-for-esphome/463164
---

### LED

Wireup a simple LED and resistor to `GPIO5`

[![]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)

### Compile and upload

1. Plug in the board into the `USB` port
1. Compile

    ```sh
    ```
