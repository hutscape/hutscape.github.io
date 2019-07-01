---
layout: components
title: IR Receiver
hardware:
  - arduino
  - uno
  - infrared
  - IR
  - receiver
references:
  - name: Blink Arduino tutorial
    url: https://www.arduino.cc/en/Tutorial/Blink
  - name: Use Arduino AVR Board version 1.6.21
    url: https://forum.arduino.cc/index.php?topic=574020.0
  - name: IRLib2 for Arduino Infrared
    url: https://github.com/cyborg5/IRLib2
  - name: Receiving and Decoding IR tutorial by Adafruit
    url: https://learn.adafruit.com/using-an-infrared-library/hardware-needed
---

Use IR receiver `TSOP4838` and Arduino to receive remote controller IR codes. Start monitoring the serial console, and then press the remote controller button.

### Debugging

For error on `lto1: internal compiler error: in lto_output_varpool_node, at lto-cgraph.c:624`, install version `1.6.21` of the [IR Arduino library](https://github.com/cyborg5/IRLib2):

```
arduino-cli core install arduino:avr@1.6.21
```
