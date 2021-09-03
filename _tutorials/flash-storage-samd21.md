---
layout: tutorials
title: Read and Write to the flash memory
dependancies:
  - name: Arduino SAMD core
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Arduino Flash storage for SAMD boards
    url: https://github.com/cmaglie/FlashStorage
firmware:
  - Arduino
dev_board: RobotDyn M0 Mini
chips:
  - SAMD21
features:
  - flash
  - read
  - write
video: xV1l5SdE8sk
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
images:
  console: flash-storage-samd21-console.png
references:
  - name: Store name and surname code example
    url: https://github.com/cmaglie/FlashStorage/blob/master/examples/StoreNameAndSurname/StoreNameAndSurname.ino
prerequisites:
  - name: EEPROM Emulation with Arduino API
    url: ./eeprom-emulation-samd21
---

Read and write a single number to the flash memory of a SAMD21 board (E.g. Arduino M0 or RobotDyn SAMD21 M0-Mini).
