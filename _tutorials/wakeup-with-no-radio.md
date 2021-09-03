---
layout: tutorials
title: Wakeup with no radio
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
chips:
  - ESP8266
dev_board: WeMos D1 Mini
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
features:
  - wakeup
  - no radio
references:
  - name: Power usage options
    url: https://www.esp8266.com/wiki/doku.php?id=esp8266_power_usage
  - name: Corresponding options and parameters
    url: https://www.esp8266.com/viewtopic.php?f=32&t=12901
---

Wakeup from deep sleep with various options to turn on / off the radio.

In ESP8266, there are four options and params:

1. [`WAKE_RF_DEFAULT`] `deepsleepsetoption(0)`: Radio calibration after deep-sleep wake up depends on init data byte 108.
1. [`WAKE_RFCAL`] `deepsleepsetoption(1)`: Radio calibration is done after deep-sleep wake up; this increases the current consumption.
1. [`WAKE_NO_RFCAL`] `deepsleepsetoption(2)`: No radio calibration after deep-sleep wake up; this reduces the current consumption.
1. [`WAKE_RF_DISABLED`] `deepsleepsetoption(4)`: Disable RF after deep-sleep wake up, just like modem sleep; this has the least current consumption; the device is not able to transmit or receive data after wake up.
