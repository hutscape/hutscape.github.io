---
layout: tutorials
title: GPS and display for ESP32 T-Beam
hardware:
  - esp32
  - t-beam
  - lilygo
  - gps
  - ublox
references:
  - name: Code repo and schematic for T-Beam
    url: https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam
  - name: Link to USB to UART driver for ESP32 on macOS
    url: https://github.com/espressif/arduino-esp32/issues/1084#issuecomment-363294312
  - name: SiLabs CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
  - name: Arduino ESP32 Boards URL
    url: https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md
prerequisites:
  - name: Blinky for ESP32 LilyGO T-Beam
    url: ./blinky-esp32-t-beam
  - name: Display OLED SSD1306 with LilyGO T-Beam
    url: ./display-esp32-t-beam
---

This example contains displaying GPS data on the OLED on a ESP-32 based LilyGO T-Beam `T22_V1.1, 20191212`.

1. Setup `arduino-cli` or Arduino IDE with [boards URL for ESP32](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)

    ```sh
    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    ```
1. Install [SiLabs CP210x USB to UART Bridge VCP Drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers) for macOS
1. Install Arduino dependancies

    ```sh
    arduino-cli lib install "SparkFun Ublox Arduino Library"
    arduino-cli lib install "MicroNMEA"
    arduino-cli lib install "ESP8266 and ESP32 OLED driver for SSD1306 displays"

    cd ~/Documents/Arduino/libraries
    git clone git@github.com:lewisxhe/AXP202X_Library.git
    ```
1. Flash the firmware with the `make` command.
1. Connect the serial monitor.
1. The GPS data should be displayed both on the serial monitor and OLED display.
