---
layout: tutorials
title: Periodic or interrupt wakeup

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi

dev_board: WeMos D1 Mini
chips:
  - ESP8266
features:
  - sleep
  - wakeup
images:
  settings: periodic-wakeup-interrupt-arduino-settings.png
  console: periodic-wakeup-interrupt-console.png
  schematic: periodic-wakeup-interrupt-schematic.jpg
  prototype: periodic-wakeup-interrupt-prototype.jpg
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
references:
  - name: Synchro Clock config pin schematic
    url: https://raw.githubusercontent.com/liebman/AnalogClock/master/images/SynchroClock.png
  - name: Circuit simulation
    url: https://www.falstad.com/circuit/circuitjs.html?cct=$+1+0.000005+100.89512123094175+50+5+43%0AR+176+128+176+80+0+0+40+3.3+0+0+0.5%0Ag+176+320+176+368+0%0As+96+320+176+320+0+1+true%0Ar+176+272+304+272+0+1000%0Ar+96+128+96+224+0+10000%0Ac+96+224+224+224+0+0.00001+-2.4593660441496468e-11%0Ar+224+128+224+224+0+10000%0Aw+96+128+176+128+0%0Aw+224+128+176+128+0%0Aw+224+224+304+224+0%0Ar+304+224+304+128+0+1000%0Aw+304+128+432+128+2%0Aw+304+224+384+224+2%0Aw+176+272+96+272+0%0Aw+96+224+96+272+0%0Aw+96+272+96+320+0%0Aw+304+272+384+272+2%0As+432+128+528+128+0+1+true%0Ag+528+128+528+160+0%0Ar+432+128+432+80+0+1000%0AR+432+80+432+32+0+0+40+3.3+0+0+0.5%0Ab+400+16+570+179+0%0Ax+394+230+442+233+4+24+RST%0Ax+472+54+558+57+4+24+GPIO16%0Ax+396+282+482+285+4+24+GPIO12%0A)
---

Do something periodically on wake up after deep sleep or by pressing the button on-board.

On WeMos board , the pin `REST` to `10kΩ` pulled up to `+3V3` is already there. Remember to include it back with the `ESP8266` module.
