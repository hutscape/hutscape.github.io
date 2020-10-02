---
layout: tutorials
title: Measure battery voltage nRF52
hardware:
  - nrf52
  - voltage
  - LiPo
  - battery
  - voltage
  - adafruit
  - feather
  - bluefruit
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
