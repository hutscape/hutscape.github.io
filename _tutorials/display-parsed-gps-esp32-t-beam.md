---
layout: tutorials
title: Display Lat Long on ESP32 LilyGO T-Beam
hardware:
  - esp32
  - t-beam
  - lilygo
  - display
  - oled
  - ssd1306
  - gps
  - ublox
  - neo-6m
  - parsed
references:
  - name: Code example from LilyGO T-Beam with OLED SSD1306
    url: https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam/blob/master/examples/OLED/SSD1306SimpleDemo/SSD1306SimpleDemo.ino
  - name: Arduino library ESP8266 and ESP32 OLED driver for SSD1306 displays
    url: https://github.com/ThingPulse/esp8266-oled-ssd1306
prerequisites:
  - name: Display OLED SSD1306 with LilyGO T-Beam
    url: ./display-esp32-t-beam
  - name: GPS for ESP32 T-Beam
    url: ./gps-esp32-t-beam
---

This example contains the code to display latitude/longitude information on OLED display SSD1306 with ESP32-based LilyGO T-Beam.

1. Install Arduino library dependancy for the OLED display `SSD1306`

    ```sh
    arduino-cli lib install "ESP8266 and ESP32 OLED driver for SSD1306 displays"
    arduino-cli lib install "TinyGPSPlus"
    ```
1. Run `make` to compile and flash the code
1. Ensure, after a while, when there is a GPS fix, the latitude-longitude information is displayed on the OLED.

