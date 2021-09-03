---
layout: tutorials
title: Periodic wakeup with SAMD21

dependancies:
  - name: Arduino Low Power
    url: https://github.com/arduino-libraries/ArduinoLowPower
dev_board: RobotDyn M0 Mini
chips:
  - SAMD21
features:
  - wakeup
  - sleep
  - periodic
video: xV1l5SdE8sk
images:
  prototype: periodic-wakeup-prototype.jpg
  schematic: periodic-wakeup-schematic.png
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
  - name: RobotDyn SAMD21 M0 mini board
    url: https://robotdyn.com/samd21-m0-mini.html
---

Sleep for 30 minutes and wakeup to make 10 LED blinks before going back to sleep again for another 30 minutes.

Note that the [serial prints will not work after wakeup](https://github.com/arduino-libraries/ArduinoLowPower/issues/7). Hence use a USB to UART chip to get the `Serial1` prints. This is because during sleep, the entire USB peripheral also sleeps along with the MCU, except for the RTC.

During sleep, only power indicator green LED `ON` will be lighted on the [RobotDyn dev board](https://robotdyn.com/samd21-m0-mini.html).
