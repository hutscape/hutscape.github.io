---
layout: tutorials
title: Blinky with ESPHome ESP32-C3
dependancies:
  - name: ESPHome
    url: https://esphome.io/guides/installing_esphome.html
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  console: blinky-esphome-esp32c3-console.png
  schematic: blinky-gpio3-esp32c3-schematic.png
features:
  - esphome
  - esp32c3
  - blinky
code: yaml
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: ESP32 C3 devkit is not working
    url: https://github.com/esphome/issues/issues/2931#issuecomment-1010887766
---

### LED

The default RGB LED on-board which is `GPIO8` does on work. So, wire up a simple LED to `GPIO3` with a `1k` resistor to the ground.

### Compile and upload

1. [Compile](https://esphome.io/guides/cli.html#compile-command) firmware for this board

    ```sh
    esphome compile blinky-esphome-esp32c3.yaml
    ```
1. Plug into the `USB` port of the board and check the port address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. [Upload](https://esphome.io/guides/cli.html#upload-command) the firmware

    ```sh
    esphome upload --device /dev/cu.SLAB_USBtoUART blinky-esphome-esp32c3.yaml
    ```

### Access logs

1. Plug into the `USB` port of the board
1. Check the new port address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Access the [logs](https://esphome.io/guides/cli.html#logs-command)

    ```sh
    esphome logs --device /dev/cu.SLAB_USBtoUART blinky-esphome-esp32c3.yaml
    ```
