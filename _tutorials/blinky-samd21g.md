---
layout: tutorials
title: Blinky SAMD21G micro-controller
hardware:
  - samd21g
  - arduino
  - blinky
references:
  - name: RobotDyn SAMD21 M0-Mini a quick look
    url: http://www.armlearning.com/hardware/robotdyn-samd21-m0-mini-quick-look.php
  - name: Arduino Serial
    url: https://www.arduino.cc/reference/en/language/functions/communication/serial/
  - name: (Schematic) SAMD21G SparkFun breakout board
    url: https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/sparkfun-samd21-pro-breakout-v10.pdf
prerequisites:
  - name: Burning Arduino bootloader on MCU SAMD21G
    url: ./arduino-bootloader-samd21g
---

### Crystalless option

Create a blinky LED firmware with SAMD21G micro-controller on a **custom PCB without crystal**.

To ensure the blinky works with the crytalless option, you have to:

1. Ensure the [bootloader code has the crystalless option](./arduino-bootloader-samd21g)
1. Ensure compiled code has the cyrstalless option in `build.extra_flags` in `~/Library/Arduino15/packages/arduino/hardware/samd/1.8.6/boards.txt` on macOS or as part of options in the `arduino-cli` command

```
arduino-cli compile --fqbn arduino:samd:arduino_zero_native --build-properties build.extra_flags="-DCRYSTALLESS -D__SAMD21G18A__ {build.usb_flags}" ./ --verbose
arduino-cli compile --fqbn arduino:samd:arduino_zero_native ./ --verbose
```

### Serial

For serial printing, `SerialUSB.println()` should be used instead of `Serial.println()` because `SerialUSB` uses the Native Port, which is an emulated serial port (USB-CDC).

### Upload firmware
 
Steps to upload the blinky firmware:

1. Press the reset button twice to go into the bootloader mode
1. Run `make` to upload the blinky firmware with **crystalless option**
