---
layout: tutorials
title: Hello world ESP32-S3 with Tasmota
dependancies:
  - name: Esptool
    url:
  - name: Tasmota flashing
    url: https://tasmota.github.io/docs/Getting-Started/#flashing
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
has_code: false
images:
  prototype: hello-esp32s3-prototype.jpg
features:
  - tasmota
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Tasmota getting started
    url: https://tasmota.github.io/docs/Getting-Started/
---

### Install with esptool

1. Download `tasmota32s3.bin` from [ESP32 current release](http://ota.tasmota.com/tasmota32/release/)
1. Plug in the board into the USB board and check the port

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. Erase the flash memory with `esptool.py`

    ```sh
    $ esptool.py --port  /dev/cu.usbmodem14101 erase_flash
    ```
1. [Flash](https://docs.espressif.com/projects/esptool/en/latest/esp32s3/esptool/flash-modes.html) the binary using `esptool.py`

    ```sh
    $ esptool.py --port /dev/cu.usbmodem14101 write_flash --flash_mode dio --flash_size 4MB 0x0 tasmota32s3.bin
    ```

### Troubleshooting: Keeps rebooting

1. Plug into the `UART` port
1. Check the port addresses

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Connect to the serial monitor via the port and baud rate `115200`

1. Notice that the board keeps rebooting

    [![]({{ site.url }}/assets/images/tutorials/hello-tasmota-esp32s3-rebooting.png)]({{ site.url }}/assets/images/tutorials/hello-tasmota-esp32s3-rebooting.png)
1. Plug in the board into a power supply unit

<!-- TODO -->
<h3 class="has-background-warning-light">TODO: PSU CONFIG and SERIAL MONITOR</h3>

### Rollback from Tasmota to Arduino

1. Plug into the `UART` port
1. Check the port address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Erase flash

    ```sh
    $ esptool.py --port /dev/cu.usbserial-1410 erase_flash

    esptool.py v4.3
    Serial port /dev/cu.usbserial-1410
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
    Chip erase completed successfully in 21.3s
    Hard resetting via RTS pin...
    ```
1. Plug into the `USB` port
1. Flash the [PlatformIO Blinky example](./blinky-esp32s3-platformio)
1. Flash in the [blinky Arduino example](./blinky-esp32s3)
