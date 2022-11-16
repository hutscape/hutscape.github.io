---
layout: tutorials
title: Rollback to Arduino / ESP-IDF on ESP32-S3
dependancies:
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
prerequisites:
  - name: Blinky with ESP-IDF on ESP32-S3
    url: blinky-esp-idf-esp32s3
  - name: Blinky with Arduino on ESP32-S3
    url: blinky-arduino-esp32s3
  - name: Blinky with Tasmota on ESP32-S3
    url: blinky-tasmota-esp32s3
  - name: Blinky with Micropython on ESP32-S3
    url: blinky-micropython-esp32s3
has_code: false
images:
  prototype: esp32s3-prototype.jpg
features:
  - rollback
  - arduino
  - esp-idf
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
---

Use the rollback feature if the dev board has been flashed with [Micropython](./blinky-micropython-esp32s3) or [Tasmota](./blinky-tasmota-esp32s3) and you need to use it with [ESP-IDF](./blinky-esp-idf-esp32s3) / [Arduino](./blinky-arduino-esp32s3) again.

## Rollback steps

1. Plug in the board on the `UART` port
1. Check the port address with `ls /dev/cu.*`
    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Erase the flash
    ```sh
    $ esptool.py --port /dev/cu.usbserial-1410 erase_flash

    esptool.py v4.3
    Serial port /dev/cu.SLAB_USBtoUART
    Connecting....
    Detecting chip type... ESP32-S3
    Chip is ESP32-S3 (revision v0.1)
    Features: WiFi, BLE
    Crystal is 40MHz
    MAC: 7c:df:a1:e2:79:08
    Uploading stub...
    Running stub...
    Stub running...
    Erasing flash (this may take a while)...
    Chip erase completed successfully in 21.4s
    Hard resetting via RTS pin...
    ```
1. Plug into the `USB` port of the board
1. Flash in the [blinky example via ESP-IDF](./blinky-esp-idf-esp32s3)
1. Disconnect any serial monitor running the logs (if any).
1. Flash in the [blinky example for Arduino](./blinky-arduino-esp32s3)
