---
layout: tutorials
title: Burning Arduino bootloader on MCU SAMD21G
hardware:
  - samd21g
  - arduino
  - bootloader
  - swd
references:
  - name: Arduino Core for SAMD21G to make the bootloader file
    url: https://github.com/arduino/ArduinoCore-samd
  - name: Download SEGGER J-Flash lite software
    url: https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack
  - name: Tips and Tricks – Jumping from the Bootloader to the Application Code Cleanly
    url: https://www.beningo.com/tips-and-tricks-jumping-from-the-bootloader-to-the-application-code-cleanly/
  - name: LCSC part for SAMD21G
    url: https://lcsc.com/product-detail/ATMEL-AVR_Microchip-Tech-ATSAMD21G18A-AU_C78624.html
  - name: How to burn Arduino Zero bootloader to an Atmel ATSAMD21G18-based custom dev board
    url: https://www.youtube.com/watch?v=VQWhjzLoHB8
  - name: SAMD21 Mini/Dev Breakout Hookup Guide
    url: https://learn.sparkfun.com/tutorials/samd21-minidev-breakout-hookup-guide/all
  - name: Adafruit Adalink
    url: https://github.com/adafruit/Adafruit_Adalink
  - name: OpenOCD
    url: http://openocd.org/about/
  - name: ST Link
    url: https://www.st.com/en/development-tools/st-link-v2.html
  - name: Pogo pin connector
    url: https://www.instructables.com/id/Pogo-Pin-Programming-Connector/
  - name: How to Program SAMD Bootloaders by Adafruit
    url: https://learn.adafruit.com/how-to-program-samd-bootloaders?view=all#programming-the-bootloader-with-atmel-studio
  - name: ARM Programming by SparkFun
    url: https://learn.sparkfun.com/tutorials/arm-programming
  - name: J-Link model overview
    url: https://www.segger.com/products/debug-probes/j-link/models/model-overview/
has_code: false
---

A custom **crystalless** PCB with SAMD21G and PWD pins are required to upload the Arduino bootloader in the bare micro-controller.

## Create the bootloader file

1. Clone [ArduinoCore-samd](https://github.com/arduino/ArduinoCore-samd)
1. Go to folder `/bootloaders/zero`
1. (Option) Edit `Makefile` line `66` for **crystalless** board
    ```c
    CFLAGS_EXTRA=-D__SAMD21G18A__ -DBOARD_ID_$(BOARD_ID) -D$(SAM_BA_INTERFACES) -DCRYSTALLESS
    ```
1. (Optional) Edit `board_definitions_arduino_zero.h` line `26` to change product name
    ```c
    #define STRING_PRODUCT "Pine"
    ```
1. (Optional) Edit `sam_ba_usb.c` line `156` to change manufacturer name
    ```c
    #define STRING_MANUFACTURER "Hutscape"
    ```
1. Run `make`
1. Ensure files `bootloaders/zero/samd21_sam_ba.bin` and `bootloaders/zero/samd21_sam_ba.hex` are created

## Burn the bootloader

1. Download and open [SEGGER J-Flash Lite](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack)
1. Connect the J-Link SEGGER with PWD pins to the PCB
    <img src="{{ site.url }}/assets/images/tutorials/arduino-bootloader-samd21g-pinout.png" alt="J-Link pinout mapping to SWD pins">
    <img src="{{ site.url }}/assets/images/tutorials/arduino-bootloader-samd21g-ribbon.JPG" alt="Connecting the J-Link SEGGER via the ribbon cable to the pogo pins">
1. Choose the created bootloader data file `samd21_sam_ba.bin`
1. Click `Program Device`
    <img src="{{ site.url }}/assets/images/tutorials/arduino-bootloader-samd21g-jflash.png" alt="">
1. Disconnect J-Link SEGGER and connect the PCB to the laptop
1. Double press the reset button to bring it into the bootloader mode
1. Query `ls -al /dev/cu.usbmodem*` to ensure the port is detected
1. Query `arduino-cli board list | grep arduino` to ensure the board is detected
  ```
  /dev/cu.usbmodem14101           Serial Port (USB) Arduino Zero (Native USB Port) arduino:samd:arduino_zero_native arduino:samd
  ```
1. Flash the [blinky LED program](./blinky-samd21g) with **crystalless** option
