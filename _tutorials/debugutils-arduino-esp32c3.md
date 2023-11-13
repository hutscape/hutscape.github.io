---
date_updated: 2023-11-13
layout: tutorials
title: Debug Utils with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
  - name: Arduino Debug Utils
    url: https://github.com/arduino-libraries/Arduino_DebugUtils
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-esp32c3-prototype.jpg
features:
  - debug
  - utils
  - print
  - error
  - warning
  - info
  - esp32c3
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
prerequisites:
  - name: Blinky with Arduino on ESP32-C3
    url: ./blinky-arduino-esp32c3
---

With the Arduino library [DebugUtils](https://github.com/arduino-libraries/Arduino_DebugUtils), display various levels of print statements.

1. When it is `Debug.setDebugLevel(DBG_NONE);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-none.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-none.png)
1. When it is `Debug.setDebugLevel(DBG_ERROR);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-error.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-error.png)
1. When it is `Debug.setDebugLevel(DBG_WARNING);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-warning.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-warning.png)
1. When it is `Debug.setDebugLevel(DBG_INFO);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-info.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-info.png)
1. When it is `Debug.setDebugLevel(DBG_DEBUG);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-debug.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-debug.png)
1. When it is `Debug.setDebugLevel(DBG_VERBOSE);`
    [![]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-verbose.png)]({{ site.url }}/assets/images/tutorials/debugutils-arduino-esp32c3-verbose.png)
