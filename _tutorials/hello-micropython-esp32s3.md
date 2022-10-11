---
layout: tutorials
title: Blinky ESP32-S3 with Micropython
dependancies:
  - name: ESP32S3 Generic Micropython bin
    url: https://micropython.org/download/GENERIC_S3/
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: ampy
    url: https://github.com/scientifichackers/ampy
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
code: python
source_code_path: blink.py
images:
  prototype: blinky-esp32s3-prototype.jpg
features:
  - blinky
  - led
  - esp32s3
  - micropython
  - ampy
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
---

## Flash Micropython

1. Check version of `esptool.py`
    ```sh
    $ esptool.py version

    esptool.py v4.3
    4.3
    ```
1. Plug in the board via the `USB` port to know the port number
    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. [Download](https://micropython.org/download/) the `*.bin` file for the [board](https://micropython.org/download/GENERIC_S3/) `GENERIC_S3-20220618-v1.19.1.bin`
1. [Erase](https://micropython.org/download/GENERIC_S3/) the entire flash
    ```sh
    $ esptool.py --chip esp32s3 --port /dev/cu.usbmodem14101 erase_flash

    esptool.py v4.3
    Serial port /dev/cu.usbmodem14101
    Connecting...
    Chip is ESP32-S3 (revision v0.1)
    Features: WiFi, BLE
    Crystal is 40MHz
    MAC: 7c:df:a1:e2:79:08
    Uploading stub...
    Running stub...
    Stub running...
    Erasing flash (this may take a while)...
    Chip erase completed successfully in 21.5s
    Hard resetting via RTS pin...
    ```
1. Flash the firmware starting at address 0
    ```sh
    $ esptool.py --chip esp32s3 --port /dev/cu.usbmodem14101 write_flash -z 0 GENERIC_S3-20220618-v1.19.1.bin
    ```

## Serial

1. Download [ampy](https://github.com/scientifichackers/ampy)
1. Plug in the board through the `UART` port
1. Check the port number of the board
    ```sh
    ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Run the python script
    ```sh
    ampy --port /dev/cu.usbserial-1410 run blink.py
    ```

## Rollback from Micropython to Arduino

1. Plug in the board on the `UART` port
1. Check the port address
    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Erase the flash
    ```sh
    $ esptool.py --port /dev/cu.usbmodem1234561 erase_flash

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
1. Flash in the [blinky example via ESP-IDF](./blinky-esp-idf-esp32s3)
1. Flash in the [blinky example for Arduino](./blinky-esp32s3)
