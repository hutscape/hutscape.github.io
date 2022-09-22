---
layout: tutorials
title: Hello World with ESP-IDF in VS Code
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
  console: hello-esp-idf-esp32s3-console.png
  prototype: hello-esp32s3-prototype.jpg
features:
  - esp-idf
  - serial
  - esp32s3
  - vscode
code: c
source_code_path: hello_world/main/hello_world_main.c
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
---

1. Open VS Code in an empty folder where the hello world code will be created
1. Access the command pallette in VS Code and type in `ESP-IDF`. Select `Show Examples Projects`.
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step2.png)
1. Choose the current ESP-IDF path
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step3.png)
1. Choose the `hello_world` project and click `Click project using example hello_world`
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step4.png)
1. Initial boilerplate of files and folders will be created with `main/hello_world_main.c`
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step5.png)
1. Configure 3 things at the bottom of the IDE's green status bar
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step6.png)
    - Port E.g. `/dev/cu.usbmodel14101`

        ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-port.png)
    - Device target E.g `esp32s3`

        ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-device-target.png)
    - Flash method `UART`

        ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-flash-method.png)
1. Click the icon to Build, Flash and Monitor 🔥 And the console will come up after building, compiling and uploading the formware to the board.
  ![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-final.png)
