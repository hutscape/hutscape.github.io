---
layout: tutorials
title: EEPROM read and write string
firmware:
  - Arduino
dev_board: Arduino UNO
chips:
  - ATmega328P
features:
  - EEPROM
  - read
  - write
  - string
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
images:
  console: eeprom-string-arduino-console.png
references:
  - name: EEPROM Write tutorial
    url: https://www.arduino.cc/en/Tutorial/EEPROMWrite
---

Read and write a word in the EEPROM with a null-terminated string to detect the end of word.
