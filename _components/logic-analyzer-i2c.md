---
layout: components
title: Analyzing I2C signals
hardware:
  - arduino
  - uno
  - I2C
  - logic
  - analyzer
  - saleae
  - Si7021
references:
  - name: Adafruit Si7021 Temperature & Humidity Sensor Breakout Board
    url: https://www.adafruit.com/product/3251
  - name: Si7021 datasheet
    url: https://www.silabs.com/documents/public/data-sheets/Si7021-A20.pdf
---

View the decoded I2C signal from the graph produced by Saleae to read temperature from an `Si7021` breakout board.

Capture the signal in Saleae:

<img src="{{ site.url }}/assets/images/components/logic-analyzer-i2c-all-signals.png" alt="All signals">

Add asynchronous serial to decode the captured signal:

<img src="{{ site.url }}/assets/images/components/logic-analyzer-i2c-decoded-signals.png" alt="Decoded I2C signal">

MS Byte for temperature is `0x6D` and LS Byte for temperature is `0xAC` which is `0x6DAC` in hexadecimal and `28076` in decimal. Using the equation given in the datasheet, the temperature in Celcius is `28076*175.72 / 65536 - 46.85 = 28`, **28 C**, which is same as what is shown in the serial monitor.
