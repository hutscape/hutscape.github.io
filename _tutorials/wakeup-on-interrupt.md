---
layout: tutorials
title: Wakeup on interrupt
dev_board: Arduino UNO
firmware:
  - Arduino
chips:
  - ATmega328P
features:
  - wakeup
  - interrupt
images:
  console: wakeup-on-interrupt-console.png
  schematic: wakeup-on-interrupt-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
---

Wakeup the Arduino UNO on interrupt. Press a button wired to `PIN 2` and short it to `GND` to wake it up.
