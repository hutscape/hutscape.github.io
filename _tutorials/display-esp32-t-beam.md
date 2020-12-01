---
layout: tutorials
title: Display OLED SSD1306 with LilyGO T-Beam
hardware:
  - esp32
  - t-beam
  - lilygo
  - display
  - oled
  - ssd1306
references:
  - name: Code example from LilyGO T-Beam with OLED SSD1306
    url: https://github.com/Xinyuan-LilyGO/LilyGO-T-Beam/blob/master/examples/OLED/SSD1306SimpleDemo/SSD1306SimpleDemo.ino
  - name: Arduino library AXP202X
    url: https://github.com/lewisxhe/AXP202X_Library
  - name: Arduino library ESP8266 and ESP32 OLED driver for SSD1306 displays
    url: https://github.com/ThingPulse/esp8266-oled-ssd1306
---

This example contains the code to display a bunch of `Hello world` on the OLED display SSD1306.

1. Install Arduino library dependancy for the OLED display `SSD1306`

    ```sh
    arduino-cli lib install "ESP8266 and ESP32 OLED driver for SSD1306 displays"
    ```
1. Install Arduino library for `AXP202`, Single Cell Li-Battery PWM Charger and Power System Management IC

    ```sh
    cd ~/Documents/Arduino/libraries
    git clone git@github.com:lewisxhe/AXP202X_Library.git
    ```

