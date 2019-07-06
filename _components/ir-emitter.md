---
layout: components
title: IR Emitter
hardware:
  - arduino
  - uno
  - infrared
  - IR
  - emitter
prerequisites:
  - name: IR Receiver
    url: ./ir-receiver
references:
  - name: Use Arduino AVR Board version 1.6.21
    url: https://forum.arduino.cc/index.php?topic=574020.0
  - name: IRLib2 for Arduino Infrared
    url: https://github.com/cyborg5/IRLib2
  - name: Receiving and Decoding IR tutorial by Adafruit
    url: https://learn.adafruit.com/using-an-infrared-library/hardware-needed
---

Get the HEX code to emit using the [IR receiver program](./ir-receiver). This code contains both IR receiver and IR emitter logic.
