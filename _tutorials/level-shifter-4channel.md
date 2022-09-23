---
layout: tutorials
title: Level shifter
dev_board: Arduino UNO
chips:
  - BSS138
features:
  - logic
  - level
  - shift
  - 5V
  - 3.3V
  - bidirectional
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: Level shifter 4 channel
    url: https://s.click.aliexpress.com/e/_9jA6rS
  - name: Solderless breadboard
    url: https://amzn.to/3gNRp1x
references:
  - name: Bi-Directional Logic Level Converter Hookup Guide
    url: https://learn.sparkfun.com/tutorials/bi-directional-logic-level-converter-hookup-guide/all
  - name: Instructables 4 Channel Logic Converter 3.3V - 5.0V Tutorial
    url: https://www.instructables.com/LC-04-4-Channel-Logic-Converter-33V-50V/
  - name: Level Shifting 3.3V microcontrollers and NeoPixels
    url: https://learn.adafruit.com/neopixel-levelshifter
has_code: false
---

## Level shifting up

Converting up from `3.3V` to `5V`.

![]({{ site.url }}/assets/images/tutorials/level-shifter-4channel-up-schematic.png)

![]({{ site.url }}/assets/images/tutorials/level-shifter-4channel-up-multimeter.png)

## Level shifting down

Converting down from `5V` to `3.3V`.

![]({{ site.url }}/assets/images/tutorials/level-shifter-4channel-down-schematic.png)

![]({{ site.url }}/assets/images/tutorials/level-shifter-4channel-down-multimeter.png)
