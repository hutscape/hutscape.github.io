---
layout: tutorials
title: Blinky with ESP32-S3 ESP-IDF in VS Code
dependancies:
  - name: ESP-IDF VS Code IDE Installation
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/get-started/index.html#ide
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  console: blinky-esp-idf-esp32s3-console.png
  prototype: blinky-esp32s3-prototype.jpg
features:
  - esp-idf
  - blinky
  - esp32s3
  - vscode
code: c
source_code_path: blink/main/blink_example_main.c
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
prerequisites:
  - name: Hello World with ESP-IDF in VS Code
    url: ./hello-esp-idf-esp32s3
---

1. Use the VS Code editor, to build the example project `blink`.
  ![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32s3-example-blink.png)
1. Set the port, board, flash method.
1. Click the icon 🔥 to Build, Flash and Monitor.
  ![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32s3-vscode.png)
