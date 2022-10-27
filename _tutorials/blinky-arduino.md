---
layout: tutorials
title: Blinky Arduino UNO
dev_board: Arduino UNO
dependancies:
  - name: CP210x USB to UART Bridge VCP Drivers
    url: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
firmware:
  - Arduino
chips:
  - ATmega328P
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: CP2102 USB 2.0 to UART TTL 5PIN Connector Module
    url: https://www.aliexpress.com/item/32694152202.html
  - name: (Optional) Power supply unit
    url: https://s.click.aliexpress.com/e/_AUols3
  - name: (Optional) USB Female to 4MM Banana Plug Test Lead
    url: https://s.click.aliexpress.com/e/_DmRto71
video: Os5sGlw3PV0
images:
  console: blinky-arduino-console.png
  prototype: blinky-arduino-prototype.jpg
  schematic: blinky-arduino-psu-schematic.png
  list:
    - image: blinky-arduino-psu-prototype.jpg
      description: Use an external power supply and a UART-USB bridge to view the serial monitor
    - image: blinky-arduino-psu-schematic.png
      description: Wire up the Arduino UNO to an external power supply unit. Use a UART-USB bridge to the computer to view the serial monitor
references:
  - name: Blink Arduino tutorial
    url: https://www.arduino.cc/en/Tutorial/Blink
---

Create a blinky LED with Arduino UNO board with `ATmega328p` microcontroller. LED is the on-board `LED_BUILTIN`, `GPIO13`.

### Use with an external power supply

As an alternative, external power supply unit can be used with an UART-USB bridge.

1. Wireup Arduino UNO with an external power supply and UART-USB bridge to the computer
    [![]({{ site.url }}/assets/images/tutorials/blinky-arduino-psu-schematic.png)]({{ site.url }}/assets/images/tutorials/blinky-arduino-psu-schematic.png)
1. Start the serial monitor on the computer.
