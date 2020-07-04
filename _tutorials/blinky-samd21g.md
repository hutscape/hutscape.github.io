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
  - name: SAMD21G SparkFun breakout board schematic
    url: https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/sparkfun-samd21-pro-breakout-v10.pdf
---

Create a blinky LED with SAMD21G micro-controller. This is possible on a custom PCB (crystalless option) with the SAMD21G18 chip and other components. Check the schematic for the details of the circuit with SAMD21G18, LEDs, USB port and SWD pinouts on the PCB.

For serial printing, `SerialUSB.println()` should be used instead of `Serial.println()` because `SerialUSB` uses the Native Port, which is an emulated serial port (USB-CDC).

Steps to upload the blinky firmware:

1. Press the reset button twice to go into the bootloader mode
1. Run `make` to upload the blinky firmware
