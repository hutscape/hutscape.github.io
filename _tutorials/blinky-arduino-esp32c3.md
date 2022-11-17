---
layout: tutorials
title: Blinky with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  settings: blinky-esp32c3-arduino-settings.png
  prototype: blinky-esp32c3-prototype.jpg
  console: blinky-esp32c3-arduino-console.png
features:
  - blinky
  - led
  - serial
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: ESP32c3 - No serial output from built in jtag hardware
    url: https://github.com/espressif/arduino-esp32/issues/6545
prerequisites:
  - name: Hello world ESP32-S3
    url: ./hello-world-esp32s3
---

The on-board LED `LED_BUILTIN` is `GPIO8` as defined in the [pin out](https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout).

Compile and upload the firmware via the Arduino IDE or `arduino-cli` with `Makefile`.
