---
layout: components
title: Periodic wakeup with SAMD21
hardware:
  - arduino
  - m0
  - samd21
  - robotdyn
  - wakeup
  - sleep
  - periodic
references:
  - name: External Wakeup
    url: https://www.arduino.cc/en/Tutorial/LowPowerTimedWakeup
  - name: Low Power library
    url: https://www.arduino.cc/en/Reference/ArduinoLowPower
  - name: ArduinoLowPower
    url: https://github.com/arduino-libraries/ArduinoLowPower
  - name: Low Power Library for Arduino
    url: https://github.com/rocketscream/Low-Power
  - name: RTC Library for SAMD21 based boards
    url: https://github.com/arduino-libraries/RTCZero
  - name: Serial not working after wakeup
    url: https://github.com/arduino-libraries/ArduinoLowPower/issues/7
---

Read and write a single number to the flash memory of a SAMD21 board (E.g. Arduino M0 or RobotDyn SAMD21 M0-Mini).

Note that the [serial prints will not work after wakeup](https://github.com/arduino-libraries/ArduinoLowPower/issues/7). Hence use a USB to UART chip to get the `Serial1` prints.
