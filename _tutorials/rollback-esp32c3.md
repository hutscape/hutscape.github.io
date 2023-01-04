---
layout: tutorials
title: Rollback to Arduino / ESP-IDF on ESP32-C3
dependancies:
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
prerequisites:
  - name: Blinky with ESP-IDF on ESP32-C3
    url: blinky-esp-idf-esp32c3
  - name: Blinky with Arduino on ESP32-C3
    url: blinky-arduino-esp32c3
  - name: Blinky with Tasmota on ESP32-C3
    url: blinky-tasmota-esp32c3
  - name: Blinky with Micropython on ESP32-C3
    url: blinky-micropython-esp32c3
has_code: false
images:
  prototype: blinky-esp32c3-prototype.jpg
features:
  - rollback
  - arduino
  - esp-idf
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
---

Use the rollback feature if the dev board has been flashed with [Micropython](./blinky-micropython-esp32c3) or [Tasmota](./blinky-tasmota-esp32c3) and you need to use it with [ESP-IDF](./blinky-esp-idf-esp32c3) / [Arduino](./blinky-arduino-esp32c3) again.

## Rollback steps

1. Plug in the board on the `USB` port
1. Check the port address with `ls /dev/cu.*`
    ```sh
    ls /dev/cu.*
    ```
1. Erase the flash
    ```sh
    esptool.py --chip esp32c3 --port /dev/cu.SLAB_USBtoUART erase_flash
    ```
1. Flash in the [blinky example via ESP-IDF](./blinky-esp-idf-esp32c3)
1. Disconnect any serial monitor running the logs (if any).
1. Flash in the [blinky example for Arduino](./blinky-arduino-esp32c3)
