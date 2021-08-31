---
layout: tutorials
title: IR Receiver raw codes
dev_board: RobotDyn M0 mini
dependancies:
  - name: IRLib2
    url: https://github.com/cyborg5/IRLib2
sensors:
  - infrared
features:
  - infrared
  - IR
  - receive
  - raw
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
prerequisites:
  - name: IR Receiver
    url: ./ir-receiver
  - name: IR Raw Receiver
    url: ./ir-raw-receive
references:
  - name: Use Arduino AVR Board version 1.6.21
    url: https://forum.arduino.cc/index.php?topic=574020.0
  - name: IRLib2 for Arduino Infrared
    url: https://github.com/cyborg5/IRLib2
  - name: Raw receive code example
    url: https://github.com/cyborg5/IRLib2/blob/master/IRLib2/examples/rawRecv/rawRecv.ino
---

This code dumps the raw IR code length when detected.
