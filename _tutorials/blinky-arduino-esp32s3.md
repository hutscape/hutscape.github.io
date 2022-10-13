---
layout: tutorials
title: Blinky with Arduino on ESP32-S3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  console: blinky-arduino-esp32s3-console.png
  prototype: blinky-esp32s3-prototype.jpg
  settings: blinky-arduino-esp32s3-settings.png
  schematic: blinky-arduino-esp32s3-schematic.png
  list:
    - image: blinky-esp32s3-gpio5.jpg
      description: Use GPIO5 to add a simple external LED
    - image: hello-esp32s3-uart.jpg
      description: Change to the UART port to view the serial monitor
features:
  - blinky
  - led
  - serial
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: KiCad symbol for ESP32-S3-devkitC
    url: https://github.com/espressif/kicad-libraries
  - name: arduino-esp32 2.0.3 add support for ESP32-S3, to develope in Arduino IDE
    url: https://embedded-things.blogspot.com/2022/05/arduino-esp32-203-add-support-for-esp32.html
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
prerequisites:
  - name: Hello world with Arduino on ESP32-S3
    url: ./hello-arduino-esp32s3
---

### LED

`LED_BUILTIN` is pin 48 as defined in the [Arduino variant](https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h#L17) and [schematic](https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf).

Alternatively `#define LED 5` can be used as well to test a simpler LED.

[![]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)

### Upload using USB port

1. There are 2 ports on the board: `USB` and `UART`
1. Plug into the `USB` port and check the addresses

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. Upload using the `USB` port for example, `/dev/cu.usbmodem14101`

### Access serial monitor using UART port

1. Unplug and plug into the `UART` port and check the address

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Start the serial monitor in the port `/dev/cu.usbserial-1410` when plugged into `UART`

### Access serial monitor using USB port

1. Plug into the `USB` port
1. Compile code with the menu item `USB CDC on Boot` Enabled on Arduino IDE
    - or on `arduino-cli` with `--fqbn esp32:esp32:esp32s3:CDCOnBoot=cdc`
1. Using the same USB port, access the serial monitor

[![]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-settings.png)]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-settings.png)
