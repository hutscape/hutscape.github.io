---
layout: tutorials
title: Blinky with ESPHome ESP32-S3
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
  list:
    - image: blinky-esp32s3-gpio5-top.jpg
      description: Use GPIO5 to add a simple external LED
features:
  - esphome
  - esp32s3
  - blinky
code: yaml
prerequisites:
  - name: Hello world with ESPHome on ESP32-S3
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

The default RGB LED on-board which is `GPIO48`, does not seem to work with ESPHome. So, wireup a simple LED and resistor to [`GPIO5` pin on the board](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout).

### Compile and upload

1. [Compile](https://esphome.io/guides/cli.html#compile-command) firmware for this board

    ```sh
    esphome compile blinky-esphome-esp32s3.yaml
    ```
1. Plug into the `USB` port of the board and check the port address

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. [Upload](https://esphome.io/guides/cli.html#upload-command) the firmware

    ```sh
    esphome upload --device /dev/cu.usbmodem14101 blinky-esphome-esp32s3.yaml
    ```

### Access logs

1. Unplug and plug into the `UART` port of the board
1. Check the new port address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Access the [logs](https://esphome.io/guides/cli.html#logs-command)

    ```sh
    esphome logs --device /dev/cu.usbserial-1410 blinky-esphome-esp32s3.yaml
    ```
