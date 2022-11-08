---
layout: tutorials
title: Timer wakeup with Arduino on ESP32-S3
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
images:
  prototype: blinky-esp32s3-gpio5.jpg
  schematic: blinky-arduino-esp32s3-schematic.png
  console: timer-wakeup-arduino-esp32s3.png
  list:
    - image: blinky-esp32s3-gpio5-top.jpg
      description: Use GPIO5 to add a simple external LED
features:
  - timer
  - wakeup
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
  - name: Timer wakeup code
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/DeepSleep/TimerWakeUp/TimerWakeUp.ino
prerequisites:
  - name: Hello world with Arduino on ESP32-S3
    url: ./hello-arduino-esp32s3
---

### Troubleshooting: Port not available

While sleeping, the port will not be available via the `USB` port. Hence, a delay has been added by blinking the LED to make time for uploading firmware in development.

[![]({{ site.url }}/assets/images/tutorials/timer-wakeup-port-unavailable.png)]({{ site.url }}/assets/images/tutorials/timer-wakeup-port-unavailable.png)
