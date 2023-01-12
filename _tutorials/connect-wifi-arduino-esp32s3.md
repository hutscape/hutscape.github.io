---
layout: tutorials
title: Connect to a WiFi network with Arduino on ESP32-S3
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
  - name: CP2102 USB 2.0 to UART TTL 5PIN Connector Module
    url: https://www.aliexpress.com/item/32694152202.html
images:
  console: connect-wifi-arduino-esp32s3-console.png
  prototype: esp32s3-prototype.jpg
features:
  - wifi
  - connect
  - ssid
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: KiCad symbol for ESP32-S3-devkitC
    url: https://github.com/espressif/kicad-libraries
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
---

Create a file `Secret.h` in the same folder with the code.

```sh
$ tree
.
├── Secret.h
└── connect-wifi-arduino-esp32s3.ino
```

Include the actual Wifi SSID name and password in the file.

```h
char ssid[] = "secret";
char pass[] = "secret";
```

Compile and upload the firmware to connect to the WiFi.
