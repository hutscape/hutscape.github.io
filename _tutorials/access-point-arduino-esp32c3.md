---
date_updated: 2024-06-21
layout: tutorials
title: Access Point with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: access-point-arduino-esp32c3-prototype.jpg
  console: access-point-arduino-esp32c3-console.png
features:
  - access
  - point
  - wifi
  - webpage
  - esp32c3
# video:
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
prerequisites:
  - name: Blinky with Arduino on ESP32-C3
    url: ./blinky-arduino-esp32c3
---

The code below is an example of how to create an access point using the ESP32-C3. The code creates an access point with the SSID `hello` and password `12345678`. The code then starts a server on port `80`. When a client connects to the server, the server sends the message "Hello World!" to the client.

1. Plug in to the computer with USB cable
1. Upload the firmware with `make` or Arduino IDE
1. Unplug and then plug in the dev board to a seperate USB cable power
1. Connect to WiFi access point `hello` with password `12345678`
    [![]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-network.png)]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-network.png)
    [![]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-wifi.png)]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-wifi.png)
1. Browser to `http://192.168.4.1` on the browser
1. View `hello world` on the webpage
    [![]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-webpage.png)]({{ site.url }}/assets/images/tutorials/access-point-arduino-esp32c3-webpage.png)
