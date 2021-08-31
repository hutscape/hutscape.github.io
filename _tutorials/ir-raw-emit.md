---
layout: tutorials
title: IR emit raw codes
dev_board: Arduino UNO
dependancies:
  - name: IRLib2 and compatible hardware
    url: https://github.com/cyborg5/IRLib2
features:
  - infrared
  - IR
  - emit
  - raw
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
sensors:
  - infrared
images:
  prototype: ir-raw-emit-prototype.jpg
  schematic: ir-raw-emit-schematic.png
prerequisites:
  - name: IR Receiver
    url: ./ir-receiver
  - name: IR Raw receive
    url: ./ir-raw-receive
references:
  - name: Use Arduino AVR Board version 1.6.21
    url: https://forum.arduino.cc/index.php?topic=574020.0
  - name: IRLib2 for Arduino Infrared
    url: https://github.com/cyborg5/IRLib2
  - name: Raw emit code example
    url: https://github.com/cyborg5/IRLib2/blob/master/IRLib2/examples/rawSend/rawSend.ino
---

This code takes in a raw dump of IR and emits it. This is useful when IR protocols are not defined for example, Mitsubishi Air conditioner model MSY-GE10VA. The file `data.h` has the list of raw dumps.
