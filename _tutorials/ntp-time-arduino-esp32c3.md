---
layout: tutorials
title: Display NTP time  with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: Arduino NTP Client
    url: https://github.com/arduino-libraries/NTPClient
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  settings: blinky-esp32c3-arduino-settings.png
  prototype: blinky-esp32c3-prototype.jpg
  console: ntp-time-arduino-esp32c3-console.png
features:
  - wifi
  - ntp
  - time
  - ssid
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
  - name: Scan WiFi with Arduino on ESP32-C3
    url: ./scan-wifi-arduino-esp32c3
---

Time example will print NTP time with timezone offset `timeZoneOffset`. It will also check if the time is within specified hours.
