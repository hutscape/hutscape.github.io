---
layout: tutorials
title: SWD programming for SAMD21G
hardware:
  - swd
  - arduino
  - bootloader
  - samd21g
code: shell
references:
  - name: LCSC part for SAMD21G
    url: https://lcsc.com/product-detail/ATMEL-AVR_Microchip-Tech-ATSAMD21G18A-AU_C78624.html
  - name: How to burn Arduino Zero bootloader to an Atmel ATSAMD21G18-based custom dev board
    url: https://www.youtube.com/watch?v=VQWhjzLoHB8  
  - name: SAMD21 Mini/Dev Breakout Hookup Guide
    url: https://learn.sparkfun.com/tutorials/samd21-minidev-breakout-hookup-guide/all
  - name: Arduino Core for SAMD21 bootloader
    url: https://github.com/arduino/ArduinoCore-samd/tree/master/bootloaders/zero
  - name: Adafruit Adalink
    url: https://github.com/adafruit/Adafruit_Adalink
  - name: OpenOCD
    url: http://openocd.org/about/
  - name: ST Link
    url: https://www.st.com/en/development-tools/st-link-v2.html
  - name: Pogo pin connector
    url: https://www.instructables.com/id/Pogo-Pin-Programming-Connector/
---

Flash the Arduino bootloader on a bare `SAMD21G` micro-controller via the SWD programming.
