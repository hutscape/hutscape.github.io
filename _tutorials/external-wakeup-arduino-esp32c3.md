---
layout: tutorials
title: External wakeup with Arduino on ESP32-C3
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
  prototype: external-wakeup-arduino-esp32c3-prototype.png
  schematic: external-wakeup-arduino-esp32c3-schematic.png
  console: external-wakeup-arduino-esp32c3-console.png
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: External wakeup code
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/DeepSleep/ExternalWakeUp/ExternalWakeUp.ino
  - name: ESP32C3 undefined reference to esp_sleep_enable_ext0_wakeup
    url: https://github.com/espressif/arduino-esp32/issues/7005#issuecomment-1188708571
  - name: I can't use IO pin to wake the chip from deep sleep for esp32-c3
    url: https://github.com/espressif/arduino-esp32/issues/5813#issuecomment-955178864
  - name: ESP32-C3 Sleep modes
    url: https://docs.espressif.com/projects/esp-idf/en/v5.0/esp32c3/api-reference/system/sleep_modes.html
features:
  - external
  - wakeup
  - trigger
  - sleep
  - esp32c3
prerequisites:
  - name: Hello world with Arduino on ESP32-C3
    url: ./hello-arduino-esp32c3
---

Wire up the hardware according to the schematic. Compile and upload the firmware.

Press the push button to wake up and see the LED Blinking 10 times before going back to sleep again.

## Troubleshooting: Sleep function

Use function `esp_deep_sleep_enable_gpio_wakeup` instead of `esp_sleep_enable_ext0_wakeup` or `esp_sleep_enable_ext1_wakeup`. <a href="#footnote-5">[5]</a> <a href="#footnote-6">[6]</a>
