---
layout: tutorials
title: Connect to a WiFi network with Arduino on ESP32-C3
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
  settings: blinky-esp32c3-arduino-settings.png
  prototype: blinky-esp32c3-prototype.jpg
  console: connect-wifi-arduino-esp32c3.png
features:
  - wifi
  - connect
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
  - name: Hello world ESP32-C3
    url: ./hello-world-esp32c3
  - name: Scan WiFi with Arduino on ESP32-C3
    url: ./scan-wifi-arduino-esp32c3
---

Create a file `Secret.h` in the same folder with the code.

```sh
$ tree
.
├── Secret.h
└── connect-wifi-arduino-esp32c3.ino
```

Include the actual Wifi SSID name and password in the file.

```h
char ssid[] = "secret";
char pass[] = "secret";
```

Compile and upload the firmware to connect to the WiFi.
