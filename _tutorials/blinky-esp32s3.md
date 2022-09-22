---
layout: tutorials
title: Blinky ESP32-S3 with Arduino
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
  console: blinky-esp32s3-console.png
  prototype: blinky-esp32s3-prototype.jpg
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
  - name: arduino-esp32 2.0.3 add support for ESP32-S3, to develope in Arduino IDE
    url: https://embedded-things.blogspot.com/2022/05/arduino-esp32-203-add-support-for-esp32.html
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
prerequisites:
  - name: Hello world ESP32-S3-DevKitC-1
    url: ./hello-world-esp32s3
---

`LED_BUILTIN` is pin 48 as defined in the [Arduino variant](https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h#L17) and [schematic](https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf).
