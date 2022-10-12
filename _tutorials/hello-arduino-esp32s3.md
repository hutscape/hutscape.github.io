---
layout: tutorials
title: Hello world with Arduino on ESP32-S3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  console: hello-world-esp32s3-console.png
  prototype: hello-esp32s3-prototype.jpg
features:
  - chip
  - core
  - version
  - serial
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: arduino-esp32 2.0.3 add support for ESP32-S3, to develope in Arduino IDE
    url: https://embedded-things.blogspot.com/2022/05/arduino-esp32-203-add-support-for-esp32.html
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
  - name: Cannot view serial monitor after compiling and uploading to ESP32S3
    url: https://forum.arduino.cc/t/cannot-view-serial-monitor-after-compiling-and-uploading-to-esp32s3/1031307
---

### Installing ESP32 Arduino on Arduino IDE

1. Check [Supported SoCs](https://docs.espressif.com/projects/arduino-esp32/en/latest/getting_started.html#supported-soc-s)
1. Copy the [Development release link](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html#installing-using-arduino-ide)
    ```
    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json
    ```
1. Go to Arduino IDE > Preferences > Additional Boards Manager URLs and paste the JSON link
    ![]({{ site.url }}/assets/images/tutorials/hello-world-esp32s3-boards-url.png)
1. Go to Tools > Boards > Boards Manager > Search ESP32 > Install the latest version
    ![]({{ site.url }}/assets/images/tutorials/hello-world-esp32s3-install-board.png)
1. Plug in the USB cable to `USB` port of the dev board
1. Check the board can be detected on the computer with linux command `ls /dev/tty.usb*`
    ![]({{ site.url }}/assets/images/tutorials/hello-world-esp32s3-check-board.png)
1. Back in the Arduino IDE choose the Board and the Port with USB CDC Enabled on Boot
    ![]({{ site.url }}/assets/images/tutorials/hello-arduino-esp32s3-settings.png)
1. Compile and upload the firmware
1. View the serial monitor

### Add menu option in arduino-cli

1. Run command `arduino-cli board details -b esp32:esp32:esp32s3` to get the CDC USB on Boot menu item to enable it

    ```sh
    $ arduino-cli board details -b esp32:esp32:esp32s3
    Board name:            ESP32S3 Dev Module
    FQBN:                  esp32:esp32:esp32s3
    Board version:         2.0.4

    Package name:          esp32
    Package maintainer:    Espressif Systems
    Package URL:           https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    Package website:       https://github.com/espressif/arduino-esp32
    Package online help:   http://esp32.com

    Platform name:         esp32
    Platform category:     ESP32
    Platform architecture: esp32
    Platform URL:          https://github.com/espressif/arduino-esp32/releases/download/2.0.4/esp32-2.0.4.zip
    Platform file name:    esp32-2.0.4.zip
    Platform size (bytes): 259715595
    Platform checksum:     SHA-256:832609d6f4cd0edf4e471f02e30b7f0e1c86fdd1b950990ef40431e656237214

    Required tool:         esp32:riscv32-esp-elf-gcc      gcc8_4_0-esp-2021r2-patch3
    Required tool:         esp32:xtensa-esp32-elf-gcc     gcc8_4_0-esp-2021r2-patch3
    Required tool:         esp32:xtensa-esp32s2-elf-gcc   gcc8_4_0-esp-2021r2-patch3
    Required tool:         esp32:xtensa-esp32s3-elf-gcc   gcc8_4_0-esp-2021r2-patch3
    Required tool:         esp32:esptool_py               3.3.0
    Required tool:         esp32:mkspiffs                 0.2.3
    Required tool:         esp32:mklittlefs               3.0.0-gnu12-dc7f933

    Option:              PSRAM                                                PSRAM
                        Disabled                                     ✔       PSRAM=disabled
                        QSPI PSRAM                                           PSRAM=enabled
                        OPI PSRAM                                            PSRAM=opi
    Option:              Flash Mode                                           FlashMode
                          QIO 80MHz                                    ✔       FlashMode=qio
                          QIO 120MHz                                           FlashMode=qio120
                          DIO 80MHz                                            FlashMode=dio
                          OPI 80MHz                                            FlashMode=opi
    Option:              Flash Size                                           FlashSize
                        4MB (32Mb)                                   ✔       FlashSize=4M
                        8MB (64Mb)                                           FlashSize=8M
                        16MB (128Mb)                                         FlashSize=16M
    Option:              Arduino Runs On                                      LoopCore
                        Core 1                                       ✔       LoopCore=1
                        Core 0                                               LoopCore=0
    Option:              Events Run On                                        EventsCore
                        Core 1                                       ✔       EventsCore=1
                        Core 0                                               EventsCore=0
    Option:              USB Mode                                             USBMode
                        Hardware CDC and JTAG                        ✔       USBMode=hwcdc
                        USB-OTG (TinyUSB)                                    USBMode=default
    Option:              USB CDC On Boot                                      CDCOnBoot
                        Disabled                                     ✔       CDCOnBoot=default
                        Enabled                                              CDCOnBoot=cdc
    Option:              USB Firmware MSC On Boot                             MSCOnBoot
                        Disabled                                     ✔       MSCOnBoot=default
                        Enabled (Requires USB-OTG Mode)                      MSCOnBoot=msc
    Option:              USB DFU On Boot                                      DFUOnBoot
                        Disabled                                     ✔       DFUOnBoot=default
                        Enabled (Requires USB-OTG Mode)                      DFUOnBoot=dfu
    Option:              Upload Mode                                          UploadMode
                        UART0 / Hardware CDC                         ✔       UploadMode=default
                        USB-OTG CDC (TinyUSB)                                UploadMode=cdc
    Option:              Partition Scheme                                     PartitionScheme
                        Default 4MB with spiffs (1.2MB APP/1.5MB SPIFFS) ✔       PartitionScheme=default
                        Default 4MB with ffat (1.2MB APP/1.5MB FATFS)         PartitionScheme=defaultffat
                        8M Flash (3MB APP/1.5MB FAT)                         PartitionScheme=default_8MB
                        Minimal (1.3MB APP/700KB SPIFFS)                     PartitionScheme=minimal
                        No OTA (2MB APP/2MB SPIFFS)                          PartitionScheme=no_ota
                        No OTA (1MB APP/3MB SPIFFS)                          PartitionScheme=noota_3g
                        No OTA (2MB APP/2MB FATFS)                           PartitionScheme=noota_ffat
                        No OTA (1MB APP/3MB FATFS)                           PartitionScheme=noota_3gffat
                        Huge APP (3MB No OTA/1MB SPIFFS)                     PartitionScheme=huge_app
                        Minimal SPIFFS (1.9MB APP with OTA/190KB SPIFFS)         PartitionScheme=min_spiffs
                        16M Flash (2MB APP/12.5MB FAT)                       PartitionScheme=fatflash
                        16M Flash (3MB APP/9MB FATFS)                        PartitionScheme=app3M_fat9M_16MB
                        RainMaker                                            PartitionScheme=rainmaker
    Option:              CPU Frequency                                        CPUFreq
                        240MHz (WiFi)                                ✔       CPUFreq=240
                        160MHz (WiFi)                                        CPUFreq=160
                        80MHz (WiFi)                                         CPUFreq=80
                        40MHz                                                CPUFreq=40
                        20MHz                                                CPUFreq=20
                        10MHz                                                CPUFreq=10
    Option:              Upload Speed                                         UploadSpeed
                        921600                                       ✔       UploadSpeed=921600
                        115200                                               UploadSpeed=115200
                        230400                                               UploadSpeed=230400
                        460800                                               UploadSpeed=460800
    Option:              Core Debug Level                                     DebugLevel
                        None                                         ✔       DebugLevel=none
                        Error                                                DebugLevel=error
                        Warn                                                 DebugLevel=warn
                        Info                                                 DebugLevel=info
                        Debug                                                DebugLevel=debug
                        Verbose                                              DebugLevel=verbose
    Programmers:         Id                                           Name
                        esptool                                      Esptool                                         Esptool
    ```
1. Add on the full FBQN format of `esp32:esp32:esp32s3:CDCOnBoot=cdc` as part of the `arduino-cli compile` command
