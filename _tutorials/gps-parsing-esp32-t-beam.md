---
layout: tutorials
title: GPS parsing for ESP32 T-Beam

dependancies:
  - name: Arduino ESP32
    url: https://github.com/espressif/arduino-esp32
  - name: TinyGPSPlus
    url: https://github.com/mikalhart/TinyGPSPlus
  - name: SiLabs CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
components:
  - name: TTGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
dev_board: LilyGO T-Beam
chips:
  - ESP32-DOWDQ6
  - NEO-6M
features:
  - UART
  - parsing
sensors:
  - GPS
images:
  console: gps-parsing-esp32-t-beam-console.jpg
  prototype: gps-parsing-esp32-t-beam-prototype.jpg
references:
  - name: TinyGPSPlus
    url: https://github.com/mikalhart/TinyGPSPlus
  - name: Link to USB to UART driver for ESP32 on macOS
    url: https://github.com/espressif/arduino-esp32/issues/1084#issuecomment-363294312
  - name: SiLabs CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
  - name: Arduino ESP32 Boards URL
    url: https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md
video: Kgxx7jivSes
prerequisites:
  - name: Blinky for ESP32 LilyGO T-Beam
    url: ./blinky-esp32-t-beam
  - name: GPS for ESP32 T-Beam
    url: ./gps-esp32-t-beam
---

This example contains displaying latitude and longitude from uBlox Neo-6M module on the serial monitor on a ESP-32 based LilyGO T-Beam `T22_V1.1, 20191212`. Pins `IO12` is used as `TX` and pin `IO34` is used as `RX` as shown in the [schematic for V1.1](https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam/blob/master/schematic/LilyGo_TBeam_V1.1.pdf).

1. Flash the firmware with the `make` command.
1. Connect the serial monitor.
1. Leave it in the open outdoors for a while to get a GPS fix.
1. Ensure RED LED is blinking to show the time pulse.
1. Ensure serial monitor shows the latitude and longitude.
