---
layout: components
title: Measure battery voltage
code: measure-battery-nrf52/measure-battery-nrf52.ino
hardware:
  - nrf52
  - voltage
  - LiPo
  - battery
  - adafruit
  - feather
  - bluefruit
---

Measure the LiPo battery voltage connected to Adafruit nRF52 Feather Bluefruit module and display it in the serial console.

Instructions:

1. Attach a LiPo with JST connector to Adafruit nRF52's connector
1. Use the USB cable to charge
1. Ensure yellow `CHG` LED is ON while charging
1. Keep track of the charge percentage through the serial console

![](/assets/images/components/measure-battery-nrf52-console.png)

Reference

- [nRF52 ADC](https://learn.adafruit.com/bluefruit-nrf52-feather-learning-guide/nrf52-adc)
