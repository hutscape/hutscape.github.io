---
layout: tutorials
title: Blinky for ESP32 T-Beam
hardware:
  - esp32
  - t-beam
  - lilygo
references:
  - name: Code repo and schematic for T-Beam
    url: https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam
  - name: Link to USB to UART driver for ESP32 on macOS
    url: https://github.com/espressif/arduino-esp32/issues/1084#issuecomment-363294312
  - name: SiLabs CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
  - name: Arduino ESP32 Boards URL
    url: https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md
---

This example contains a simple blinky program for the ESP32-based T-Beam by Xinyuan LilyGO version `T22_V1.1, 20191212`.

1. Setup `arduino-cli` or Arduino IDE with [boards URL for ESP32](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)

    ```
    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    ```
1. Install [SiLabs CP210x USB to UART Bridge VCP Drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers) for macOS
1. Flash the blinky firmware with the `make` command.
1. The RED LED underneath the display should blink.
