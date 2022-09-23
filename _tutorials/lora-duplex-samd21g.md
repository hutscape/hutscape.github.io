---
layout: tutorials
title: LoRa Duplex SAMD21G

dependancies:
  - name: Arduino LoRa firmware
    url: https://github.com/sandeepmistry/arduino-LoRa
dev_board: RobotDyn M0 Mini
chips:
  - SAMD21G
features:
  - lora
  - duplex
  - SPI
video: yMfmGHV5mbg
images:
  console: lora-duplex-samd21g-console.png
  prototype: lora-duplex-samd21g-prototype.JPG
  schematic: lora-duplex-samd21g-schematic.png
references:
  - name: RobotDyn M0 pinout diagram
    url: https://robotdyn.com/pub/media/0G-00005516==SAMD21-MINI/DOCS/PINOUT==0G-00005516==SAMD21-MINI.jpg
  - name: RobotDyn M0 schematic
    url: https://robotdyn.com/pub/media/0G-00005516==SAMD21-MINI/DOCS/Schematic==0G-00005516==SAMD21-MINI.pdf
  - name: Ardino LoRa Duplex example code
    url: https://github.com/sandeepmistry/arduino-LoRa/blob/master/examples/LoRaDuplex/LoRaDuplex.ino
  - name: Notes on using the Chinese "SAMD21-M0-Mini" board
    url: https://github.com/BLavery/SAMD21-M0-Mini#hardware
prerequisites:
  - name: LoRa duplex A
    url: ./lora-duplex-a
  - name: LoRa duplex B
    url: ./lora-duplex-b
---

Send and receive at the same time from another node! Use this code with [duplex b](lora-duplex-b).

## SPI

### SPI pins used

Take [note of the actual SPI pins used on SAMD21G](https://github.com/arduino/ArduinoCore-samd/blob/master/variants/arduino_mzero/variant.cpp#L141).

```c
{ PORTA, 12, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_12 }, // MISO: SERCOM4/PAD[0] PA12
{ PORTB, 11, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_11 }, // SCK: SERCOM4/PAD[3] PB11
{ PORTB, 10, PIO_SERCOM_ALT, PIN_ATTR_DIGITAL, No_ADC_Channel, NOT_ON_PWM, NOT_ON_TIMER, EXTERNAL_INT_10 }, // MOSI: SERCOM4/PAD[2] PB10
```

![]{{ site.url }}/assets/images/tutorials/lora-duplex-samd21g-pin-mux.png)

### Logic Analyzer capture

<a href="{{ site.url }}/assets/images/tutorials/lora-duplex-samd21g-signals.png"><img src="{{ site.url }}/assets/images/tutorials/lora-duplex-samd21g-signals.png" alt="Saleae Logic Analyzer capture"></a>

## RobotDyn board errors

As noted in the [error of the RobotDyn M0 mini board](https://github.com/BLavery/SAMD21-M0-Mini#hardware):

> There is a "ICSP" header, with pin assignments that look wrong on the schematic. I suspect the MISO pin on the header is really PA12, not D12. More to explore.
