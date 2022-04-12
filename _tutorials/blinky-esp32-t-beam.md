---
layout: tutorials
title: Blinky for ESP32 LilyGO T-Beam
dependancies:
  - name: Arduino ESP32
    url: https://github.com/espressif/arduino-esp32
  - name: SiLabs CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
components:
  - name: TTGO LilyGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
chips:
  - ESP32-DOWDQ6
dev_board: LilyGO T-Beam
images:
  console: blinky-esp32-t-beam-console.png
  prototype: blinky-esp32-t-beam-prototype.JPG
references:
  - name: Code repo and schematic for T-Beam
    url: https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam
  - name: Link to USB to UART driver for ESP32 on macOS
    url: https://github.com/espressif/arduino-esp32/issues/1084#issuecomment-363294312
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
