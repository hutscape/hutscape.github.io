---
layout: tutorials
title: Blinky Arduino M0
hardware:
  - arduino
  - m0
  - samd21
  - robotdyn
references:
  - name: RobotDyn SAMD21 M0-Mini a quick look
    url: http://www.armlearning.com/hardware/robotdyn-samd21-m0-mini-quick-look.php
  - name: RobotDyn SAMD21 M0-Mini
    url: https://robotdyn.com/samd21-m0-mini.html
  - name: Arduino Serial
    url: https://www.arduino.cc/reference/en/language/functions/communication/serial/
  - name: M0 serial println doesn't work, unlike programming
    url: https://forum.arduino.cc/index.php?topic=407713.0
  - name: Using Serial Monitor with Native Port
    url: https://forum.arduino.cc/index.php?topic=330588.0
---

Create a blinky LED with RobotDyn's M0-Mini board which is compatible with Arduino firmware.

For serial printing, `SerialUSB.println()` should be used instead of `Serial.println()` because `SerialUSB` uses the Native Port, which is an emulated serial port (USB-CDC).

The following code should be used for initialising the serial so that the print statements can be viewed in the `setup()`:

```c
SerialUSB.begin(9600);
while (!SerialUSB) { }
```
