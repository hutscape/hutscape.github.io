---
layout: tutorials
title: IR Receive raw codes

dependancies:
  - name: IRLib2 and compatible hardware
    url: https://github.com/cyborg5/IRLib2
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
dev_board: Arduino UNO
sensors:
  - infrared
features:
  - infrared
  - IR
  - receive
  - raw
images:
  console: ir-raw-receive-console.png
  prototype: ir-raw-receive-prototype.jpg
  schematic: ir-raw-receive-schematic.png
prerequisites:
  - name: IR Receiver
    url: ./ir-receiver
references:
  - name: Use Arduino AVR Board version 1.6.21
    url: https://forum.arduino.cc/index.php?topic=574020.0
  - name: IRLib2 for Arduino Infrared
    url: https://github.com/cyborg5/IRLib2
  - name: Raw receive code example
    url: https://github.com/cyborg5/IRLib2/blob/master/IRLib2/examples/rawRecv/rawRecv.ino
---

This code dumps the raw IR code. This is useful when IR protocols are not defined for example, Mitsubishi Air conditioner model MSY-GE10VA.

Example of a raw dump:

```
uint16_t rawData[RAW_DATA_LEN] = { 3418, 1742, 410, 1318, 410, 1314, 362, 506, 358, 510, 414, 450, 406, 1318, 362, 510, 354, 514, 354, 1370, 406, 1322, 406, 462, 354, 1366, 414, 454, 386, 478, 406, 1322, 418, 1302, 414, 458, 358, 1366, 410, 1318, 410, 462, 406, 462, 406, 1322, 354, 510, 410, 462, 358, 1366, 414, 450, 358, 510, 430, 438, 406, 462, 414, 450, 358, 510, 362, 506, 410, 450, 414, 458, 378, 494, 406, 458, 410, 462, 406, 466, 406, 466, 354, 510, 418, 458, 410, 450, 410, 454, 410, 462, 418, 450, 386, 1338, 410, 454, 414, 454, 406, 466, 358, 506, 410, 462, 418, 1306, 378, 1342, 422, 462, 358, 510, 402, 474, 386, 1338, 354, 1370, 354, 514, 414, 1310, 374, 490, 410, 462, 414, 462, 386, 482, 386, 478, 402, 1322, 386, 1338, 406, 462, 358, 1366, 410, 1318, 362, 510, 414, 454, 410, 454, 386, 482, 354, 514, 390, 1334, 358, 1362, 418, 1306, 358, 1370, 386, 482, 438, 438, 354, 506, 438, 438, 410, 450, 394, 1330, 358, 1366, 434, 1290, 406, 462, 358, 510, 402, 470, 410, 454, 410, 458, 434, 438, 402, 470, 354, 506, 410, 462, 414, 454, 414, 450, 414, 458, 402, 466, 406, 462, 386, 482, 410, 458, 410, 450, 410, 466, 410, 450, 414, 462, 418, 458, 410, 462, 410, 454, 414, 450, 414, 454, 354, 510, 386, 482, 354, 514, 414, 450, 410, 462, 418, 450, 402, 462, 414, 454, 434, 438, 406, 462, 406, 462, 386, 482, 406, 458, 390, 474, 414, 454, 406, 462, 414, 450, 410, 454, 414, 454, 414, 454, 378, 490, 354, 510, 402, 470, 402, 462, 386, 482, 414, 1306, 362, 1362, 418, 450, 378, 1346, 354, 1374, 414, 1306, 414, 454, 358, 1000};
```

### Example of the Apple TV 4th Gen remote

![]({{ site.url }}/assets/images/tutorials/ir-raw-receive-appletv-remote-code.png)

![]({{ site.url }}/assets/images/tutorials/ir-raw-receive-appletv-remote-signals.png)

### Example of the Roomba remote

![]({{ site.url }}/assets/images/tutorials/ir-raw-receive-roomba-remote-code.png)

![]({{ site.url }}/assets/images/tutorials/ir-raw-receive-roomba-remote-signals.png)
