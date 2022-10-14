---
layout: tutorials
title: Hello world with ESPHome on ESP32-S3
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
  console: hello-esphome-esp32s3-console.png
  list:
    - image: hello-esp32s3-uart.jpg
      description: Change to the UART port to view the logs
features:
  - esphome
  - esp32s3
code: yaml
references:
  - name: Install ESPHome
    url: https://esphome.io/guides/installing_esphome.html
  - name: Getting Started with the ESPHome Command Line
    url: https://esphome.io/guides/getting_started_command_line.html#
  - name: ESPHome config by Alex Mekkering
    url: https://alexmekkering.github.io/esphome-config/
  - name: SHA-256 comparison fail
    url: https://www.esp32.com/viewtopic.php?f=12&t=27454&hilit=SHA+256+comparison+failed
---

### Installing ESPHome CLI

```sh
$ python --version
Python 3.10.6

$ pip3 --version
pip 22.2.2

$ pip3 install wheel
$ pip3 install esphome
$ esphome version
Version: 2022.8.3
```

### Compile and upload

1. [Compile](https://esphome.io/guides/cli.html#compile-command) firmware for this board

    ```sh
    esphome compile hello-esphome-esp32s3.yaml
    ```
1. Plug into the `USB` port of the board and check the port address

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. [Upload](https://esphome.io/guides/cli.html#upload-command) the firmware

    ```sh
    esphome upload --device /dev/cu.usbmodem14101 hello-esphome-esp32s3.yaml
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
    esphome logs --device /dev/cu.usbserial-1410 hello-esphome-esp32s3.yaml
    ```
