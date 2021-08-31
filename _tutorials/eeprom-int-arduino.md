---
layout: tutorials
title: EEPROM read and write numbers
firmware:
  - Arduino
dev_board: Arduino UNO
chips:
  - ATmega328P
features:
  - EEPROM
  - read
  - write
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W

images:
  console: eeprom-int-arduino-console.png
references:
  - name: EEPROM Write tutorial
    url: https://www.arduino.cc/en/Tutorial/EEPROMWrite
---

Read and write a series of numbers in the EEPROM and in the process learn about the fact that each EEPROM element is 1 byte. Discover, how overflow numbers beyond 255 and negative numbers get stored.
