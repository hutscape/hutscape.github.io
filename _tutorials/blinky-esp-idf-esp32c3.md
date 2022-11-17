---
layout: tutorials
title: Blinky with ESP-IDF in VS Code on ESP32-C3
dependancies:
  - name: ESP-IDF VS Code IDE Installation
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/get-started/index.html#ide
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  console: blinky-esp-idf-esp32c3-console.png
  prototype: blinky-esp32c3-prototype.jpg
features:
  - esp-idf
  - blinky
  - esp32c3
  - vscode
code: c
source_code_path: blink/main/blink_example_main.c
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
---

1. Open VS Code IDE
1. Plug in the dev board
1. In the command pallette, choose `ESP-IDF: Show example projects`
  [![]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step2.png)]({{ site.url }}/assets/images/tutorials/hello-esp-idf-esp32s3-step2.png)
1. Choose `blink` as the example project
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-blink.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-blink.png)
1. Choose port 🔌, device target, flash method ⭐️ and then build, flash and monitor 🔥 from the bottom green status bar.
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-build.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-build.png)
    - Choose port `/dev/cu.SLAB_USBtoUART` in the bottom green status bar icon 🔌
      [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-port.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-port.png)
    - Choose device target `esp32c3`
      [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-device.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-device.png)
    - Choose debugging via `ESP32-C3 chip via builtin USB-JTAG)`
      [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-debugging.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-debugging.png)
    - Choose `UART` as the flash method in the bottom green status bar icon ⭐️
      [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-flash.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-flash.png)
1. Build, Flash and monitor in the bottom green status bar icon 🔥
1. Watch the serial monitor come up automatically in the terminal
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-all.png)]({{ site.url }}/assets/images/tutorials/blinky-esp-idf-esp32c3-all.png)
