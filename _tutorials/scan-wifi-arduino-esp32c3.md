---
layout: tutorials
title: Scan WiFi with Arduino on ESP32-C3
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
  console: scan-wifi-arduino-esp32c3.png
features:
  - scan
  - wifi
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: WiFi Scan code example
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/WiFi/examples/WiFiScan/WiFiScan.ino
prerequisites:
  - name: Hello world with Arduino on ESP32-C3
    url: ./hello-arduino-esp32c3
---

Just plug in the bare dev board and run the scan WiFi code
