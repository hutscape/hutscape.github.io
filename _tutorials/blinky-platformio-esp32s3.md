---
layout: tutorials
title: Blinky with PlatformIO VS Code on ESP32-S3
dependancies:
  - name: PlatformIO IDE for VSCode
    url: https://docs.platformio.org/en/stable/integration/ide/vscode.html#installation
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  prototype: blinky-esp32s3-prototype.jpg
  console: blinky-esp32s3-platformio-console.png
features:
  - blinky
  - led
  - serial
  - esp32s3
  - platformio
code: c
source_code_path: src/main.cpp
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Cannot view the serial monitor on VS Code PlatformIO with board ESP32-S3
    url: https://community.platformio.org/t/cannot-view-the-serial-monitor-on-vs-code-platformio-with-board-esp32-s3/29747
---

1. Create new project with PlatformIO on VS Code editor
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-create-project.png)]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-create-project.png)
1. Edit file `src/main.cpp` with blinky Arduino code
1. Edit `platform.ini` to other configurations
1. Click Build ✅ to compile the code
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-build.png)]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-build.png)
1. Click Upload ➡️ to flash the firmware on the board
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-upload.png)]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-upload.png)
1. Click Serial monitor 🔌 to view the serial prints
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-console.png)]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-console.png)
