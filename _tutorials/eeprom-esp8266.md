---
layout: tutorials
title: EEPROM read and write string
hardware:
  - esp8266
  - WeMos
  - EEPROM
  - read
  - write
references:
  - name: Null-terminated string
    url: https://en.wikipedia.org/wiki/Null-terminated_string
  - name: Arduino reading and writing string to EEPROM
    url: https://circuits4you.com/2018/10/16/arduino-reading-and-writing-string-to-eeprom/

---

Write a string to ESP8266's EEPROM and read it back without knowing its word length by locating the null character `\0`.
