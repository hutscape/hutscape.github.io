---
date_updated: 2023-11-7
layout: tutorials
title: Press the buzzer with Arduino on ESP32-C3
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
  # prototype: press-buzzer-arduino-esp32c3-prototype.jpg
  schematic: press-buzzer-arduino-esp32c3-schematic.png
  console: push-button-arduino-esp32c3-console.png
features:
  - push
  - button
  - press
  - buzzer
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
prerequisites:
  - name: Blinky with Arduino on ESP32-C3
    url: ./blinky-arduino-esp32c3
---

Press the button and hear the buzzer sound for 1 second.

Compile and upload the firmware via the Arduino IDE or `arduino-cli` with `Makefile`.
