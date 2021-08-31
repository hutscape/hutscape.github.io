---
layout: tutorials
title: EEPROM read and write string
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
chips:
  - ESP8266
dev_board: WeMos D1 Mini
features:
  - EEPROM
  - read
  - write
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_ADRrXP

images:
  console: eeprom-esp8266-console.png
references:
  - name: Null-terminated string
    url: https://en.wikipedia.org/wiki/Null-terminated_string
  - name: Arduino reading and writing string to EEPROM
    url: https://circuits4you.com/2018/10/16/arduino-reading-and-writing-string-to-eeprom/

---

Write a string to ESP8266's EEPROM and read it back without knowing its word length by locating the null character `\0`.
