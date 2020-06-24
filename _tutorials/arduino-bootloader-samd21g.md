---
layout: tutorials
title: Burning Arduino bootloader on MCU SAMD21G
hardware:
  - samd21g
  - arduino
  - bootloader
  - swd
references:
  - name: RobotDyn SAMD21 M0-Mini a quick look
    url: http://www.armlearning.com/hardware/robotdyn-samd21-m0-mini-quick-look.php
  - name: Arduino Serial
    url: https://www.arduino.cc/reference/en/language/functions/communication/serial/
prerequisites:
  - name: SAMD21G Blinky
    url: ./blinky-samd21g
has_code: false

---

A custom PCB with SAMD21G and PWD pins are required to upload the Arduino bootloader in the bare micro-controller.

## Create the bootloader file

1. Clone [ArduinoCore-samd](https://github.com/arduino/ArduinoCore-samd)
1. Go to `/bootloaders/zero`
1. Edit `Makefile` line `66` to make it crystal-less
    ```c
    CFLAGS_EXTRA=-D__SAMD21G18A__ -DBOARD_ID_$(BOARD_ID) -D$(SAM_BA_INTERFACES) -DCRYSTALLESS
    ```
1. (Optional) Edit `board_definitions_arduino_zero.h` to change product name
    ```c
    #define STRING_PRODUCT "Pine"
    ```
1. (Optional) Edit `sam_ba_usb.c` to change manufacturer name
    ```c
    #define STRING_MANUFACTURER "Hutscape"
    ```
1. Run `make`
1. Ensure files `bootloaders/zero/samd21_sam_ba.bin` and `bootloaders/zero/samd21_sam_ba.hex` are created

## Burn the bootloader

1. Download and open [SEGGER J-Flash Lite](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack)
1. Connect the J-Link SEGGER with PWD pins to the PCB
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
1. Flash the [blinky LED program](./blinky-samd21g)
