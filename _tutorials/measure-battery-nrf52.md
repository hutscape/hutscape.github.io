---
layout: tutorials
title: Measure battery voltage nRF52

dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRFutils
    url: https://github.com/adafruit/Adafruit_nRF52_nrfutil

dev_board: Adafruit Feather Bluefruit
components:
  - name: Adafruit Feather Bluefruit
    url: https://amzn.to/3ndsBlF
chips:
  - nRF52
features:
  - voltage
  - LiPo
  - battery
  - voltage
images:
  console: measure-battery-nrf52-console.png
references:
  - name: nRF52 ADC
    url: https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/nrf52-adc
---

Measure the LiPo battery voltage connected to Adafruit nRF52 Feather Bluefruit module and display it in the serial console.

Instructions:

1. Attach a LiPo with JST connector to Adafruit nRF52's connector
1. Use the USB cable to charge
1. Ensure yellow `CHG` LED is ON while charging
1. Keep track of the charge percentage through the serial console
1. Wait for the yellow `CHG` LED to be OFF to indicate complete charging
