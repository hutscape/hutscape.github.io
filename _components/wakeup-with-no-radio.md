---
layout: components
title: Wakeup with no radio
code: wakeup-with-no-radio/wakeup-with-no-radio.ino
hardware:
  - esp8266
---
4 options and params

1. [`WAKE_RF_DEFAULT`] `deepsleepsetoption(0)`: Radio calibration after deep-sleep wake up depends on init data byte 108.
1. [`WAKE_RFCAL`] `deepsleepsetoption(1)`: Radio calibration is done after deep-sleep wake up; this increases the current consumption.
1. [`WAKE_NO_RFCAL`] `deepsleepsetoption(2)`: No radio calibration after deep-sleep wake up; this reduces the current consumption.
1. [`WAKE_RF_DISABLED`] `deepsleepsetoption(4)`: Disable RF after deep-sleep wake up, just like modem sleep; this has the least current consumption; the device is not able to transmit or receive data after wake up.

Wakeup from deep sleep with various options to turn on / off the radio.

References

- [Power usage options](https://www.esp8266.com/wiki/doku.php?id=esp8266_power_usage)
- [Corresponding options and parameters](https://www.esp8266.com/viewtopic.php?f=32&t=12901)
