---
layout: tutorials
title: LoRa GPS Duplex A with ESP32 T-Beam

dependancies:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
prerequisites:
  - name: Haversine
    url: ./haversine
  - name: LoRa Duplex A with ESP32 T-Beam
    url: ./lora-duplex-a-esp32-t-beam
  - name: LoRa GPS Duplex B with ESP32 T-Beam
    url: ./lora-duplex-b-gps-esp32-t-beam
dev_board: LilyGO T-Beam
components:
  - name: TTGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
chips:
  - ESP32-DOWDQ6
features:
  - LoRa
  - duplex
sensors:
  - gps
images:
  console: lora-duplex-a-gps-esp32-t-beam-console.jpg
  prototype: lora-duplex-a-gps-esp32-t-beam-prototype.JPG
video: Kgxx7jivSes
references:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
  - name: Arduino LoRa firmware duplex example
    url: https://github.com/sandeepmistry/arduino-LoRa/blob/master/examples/LoRaDuplex/LoRaDuplex.ino
  - name: SEMTech SX1276/77/78/79 datasheet
    url: https://www.mouser.com/datasheet/2/761/sx1276-1278113.pdf
  - name: Adafruit RFM95W LoRa Radio Transceiver Breakout
    url: https://www.adafruit.com/product/3072
---

This example contains a LoRa duplex code to exchange GPS data between 2 nodes of the ESP32-based T-Beam by Xinyuan LilyGO version `T22_V1.1, 20191212`. After exchanging the GPS data, it will display its own latitude-longitude as well as the Haversine distance between the 2 notes on the OLED display.

Use this code with [duplex b](lora-duplex-b-gps-esp32-t-beam).

```c
byte localAddress = 0xAA;
byte destination = 0xBB;
```

4 types of information are shown on the OLED display:

1. Local node's latitude, longitude pair
1. Last time since the local node had a GPS fix
1. Haversine distance with the peer node
1. Last time since both the local and peer node could get GPS fix around the same time enough to get a valid Haversine distance

![]({{ site.url }}/assets/images/tutorials/lora-duplex-gps-esp32-t-beam-info.jpg)
