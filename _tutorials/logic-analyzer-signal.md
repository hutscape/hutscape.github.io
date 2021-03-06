---
layout: tutorials
title: Analyzing non-standard signals
hardware:
  - arduino
  - uno
  - logic
  - analyzer
  - saleae
  - DHT11
  - temperature
references:
  - name: Adafruit DHT sensor library
    url: https://github.com/adafruit/DHT-sensor-library
  - name: DHT11 datasheet from Mouser
    url: https://www.mouser.com/ds/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf
  - name: DHT11 datasheet
    url: http://www.produktinfo.conrad.com/datenblaetter/1400000-1499999/001405544-da-01-en-TEMP_UND_FEUCHTESENSOR_DHT11.pdf
---

View the decoded non-standard signal from the graph produced by Saleae to read temperature from a `DHT11` sensor.

Capture the signal in Saleae:

<img src="{{ site.url }}/assets/images/tutorials/logic-analyzer-signal-all-signals.png" alt="All signals">

Manually decoding the signal gives us:

```
0010 0110 0000 0000 0001 1100 0000 0000 0100 0010
RH MSB    RH LSB    T MSB     T LSB     Checksum
```

Take the temperature MSB which is `0001 1100` in binary and `28` in decimal, which is the same as what is shown i the serial monitor.
