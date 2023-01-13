---
layout: tutorials
title: Timer wakeup with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  schematic: blinky-gpio3-esp32c3-schematic.png
  console: timer-wakeup-arduino-esp32c3.png
features:
  - timer
  - wakeup
  - periodic
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: Timer wakeup code
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/DeepSleep/TimerWakeUp/TimerWakeUp.ino
prerequisites:
  - name: Hello world with Arduino on ESP32-C3
    url: ./hello-arduino-esp32c3
---

Compile and upload the code to wakeup and sleep periodically.

### Troubleshooting: Port not available

While sleeping, the port will not be available via the `USB` port. Hence, a delay has been added by blinking the LED to make time for uploading firmware in development.
