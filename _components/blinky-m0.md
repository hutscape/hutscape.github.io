---
layout: components
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
---

Create a blinky LED with RobotDyn's M0-Mini board which is compatible with Arduino firmware. `SerialUSB.println()` should be used instead of `Serial.println()`.
