---
layout: tutorials
title: Blinky ESP32-S3 with Micropython
dependancies:
  - name: ESP32-S3 Generic Micropython bin
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
  prototype: blinky-esp32s3-gpio5.jpg
  schematic: blinky-arduino-esp32s3-schematic.png
  console: blinky-micropython-esp32s3-console.png
  list:
    - image: blinky-esp32s3-gpio5-top.jpg
      description: Use GPIO5 to add a simple external LED
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

### LED

The default on-board RGB LED `GPIO48` does not work with the blinky code. Hence, wire up a simple LED and resistor to [`GPIO5` of the board](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout).

### Upload Micropython binary

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

## Access the Serial monitor with the Python code

1. Download [ampy](https://github.com/scientifichackers/ampy) and ensure it is available
    ```sh
    ampy --help
    ```
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

### Rollback from Micropython to Arduino

1. Follow the [rollback steps](./rollback-esp32s3) to erase the flash.
1. [Flash in blinky with ESP-IDF](./blinky-esp-idf-esp32s3).
1. [Flash in blinky with Arduino](./blinky-arduino-esp32c3).
