---
layout: tutorials
title: External wakeup with Arduino on ESP32-S3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
  - name: CP2102 USB 2.0 to UART TTL 5PIN Connector Module
    url: https://www.aliexpress.com/item/32694152202.html
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
  - name: External wakeup code
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/DeepSleep/ExternalWakeUp/ExternalWakeUp.ino
features:
  - external
  - wakeup
  - trigger
  - sleep
  - esp32s3
images:
  prototype: external-wakeup-arduino-esp32s3-prototype.jpg
  console: external-wakeup-arduino-esp32s3-console.png
  schematic: external-wakeup-arduino-esp32s3-schematic.png
  list:
    - image: external-wakeup-arduino-esp32s3-prototype-user-view.jpg
      description: Add a push button and an external LED to test wakeup the board
prerequisites:
  - name: Hello world with Arduino on ESP32-S3
    url: ./hello-arduino-esp32s3
---

Wire up the hardware according to the schematic. Compile and upload the firmware.

Press the push button to wake up and see the LED Blinking 10 times before going back to sleep again.
