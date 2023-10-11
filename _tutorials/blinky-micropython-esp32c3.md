---
layout: tutorials
title: Blinky with Micropython on ESP32-C3
dependancies:
  - name: ESP32-C3 with USB Micropython bin
    url: https://micropython.org/download/esp32c3-usb/
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: rshell
    url: https://github.com/dhylands/rshell
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
code: python
source_code_path: blinky.py
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  schematic: blinky-gpio3-esp32c3-schematic.png
  console: blinky-micropython-esp32c3-console.png
features:
  - blinky
  - led
  - esp32c3
  - micropython
  - ampy
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
---

### LED

The default RGB LED on-board which is `GPIO8` does on work. So, wire up a simple LED to `GPIO3` with a `1k` resistor to the ground.

### Upload the Micropython binary

1. Plug in the board via the `USB` port to know the port number
    ```sh
    $ ls /dev/cu.*

    /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. [Download](https://micropython.org/download/) the `*.bin` file for the [board](https://micropython.org/download/esp32c3/) `esp32c3-*.bin`
1. Erase the entire flash
    ```sh
    esptool.py --chip esp32c3 --port /dev/cu.SLAB_USBtoUART erase_flash
    ```
1. Flash the firmware starting at address 0
    ```sh
    esptool.py --chip esp32c3 --port /dev/cu.SLAB_USBtoUART write_flash -z 0 _tutorials/code/blinky-micropython-esp32c3/esp32c3-*.bin
    ```

## Access the Serial monitor with rshell

1. Download [rshell](https://github.com/dhylands/rshell) and ensure it is available
    ```sh
    pip install rshell
    ```
1. Plug in the board
1. Check the port number of the board
    ```sh
    ls /dev/cu.*
    /dev/cu.usbserial-1410
    ```
1. Connect to the board
    ```sh
    rshell -p  /dev/cu.usbserial-1410
    ```
1. Upload the python file `blink.py` in rshell
    ```sh
    cp blinky.py /pyboard
    ```
1. Enter the RELP with `repl`
1. Type `import blinky` or whatever the filename is
1. See the external LED blink 10 times
    [![]({{ site.url }}/assets/images/tutorials/blinky-micropython-esp32c3-console.png)]({{ site.url }}/assets/images/tutorials/blinky-micropython-esp32c3-console.png)

### Rollback from Micropython to Arduino

1. Follow the [rollback steps](./rollback-esp32c3) to erase the flash.
1. [Flash in blinky with ESP-IDF](./blinky-esp-idf-esp32c3).
1. [Flash in blinky with Arduino](./blinky-arduino-esp32c3).
