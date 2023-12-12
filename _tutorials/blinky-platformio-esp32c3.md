---
date_updated: 2023-10-09
layout: tutorials
title: Blinky with PlatformIO VS Code on ESP32-C3
dependancies:
  - name: PlatformIO IDE for VSCode
    url: https://docs.platformio.org/en/stable/integration/ide/vscode.html#installation
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-esp32c3-prototype.jpg
  console: blinky-platformio-esp32c3-console.png
features:
  - blinky
  - led
  - serial
  - esp32c3
  - platformio
code: c
source_code_path: src/main.cpp
video: SWIAXcH9MuA
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: ESP32c3 - No serial output from built in jtag hardware
    url: https://github.com/espressif/arduino-esp32/issues/6545
prerequisites:
  - name: Blinky with Arduino on ESP32-C3
    url: ./blinky-arduino-esp32c3
---

The on-board LED `LED_BUILTIN` is `GPIO8` as defined in the [pin out](https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout).

Compile and upload the firmware via the PlatformIO plugin on VS Code.

1. Create new project with PlatformIO on VS Code editor
  [![]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32s3-create-project.png)]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32s3-create-project.png)
1. Add the project name, board `Espressif ESP32-C3-DevkitM-1`, and Framework `Arduino`
  [![]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-project-wizard.png)]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-project-wizard.png)
1. Edit file `src/main.cpp` with blinky Arduino code
1. Edit `platform.ini` with configurations
1. Click Build ✅ to compile the code
  [![]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-build.png)]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-build.png)
1. Click Upload ➡️ to flash the firmware on the board
  [![]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-upload.png)]({{ site.url }}/assets/images/tutorials/blinky-platformio-esp32c3-upload.png)
1. Click Serial monitor 🔌 to view the serial prints
  [![]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-console.png)]({{ site.url }}/assets/images/tutorials/blinky-esp32s3-platformio-console.png)
