---
layout: tutorials
title: Blinky ESP32-S3-DevKitC-1
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
  prototype: hello-world-esp32s3-prototype.jpg
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: arduino-esp32 2.0.3 add support for ESP32-S3, to develope in Arduino IDE
    url: https://embedded-things.blogspot.com/2022/05/arduino-esp32-203-add-support-for-esp32.html
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32s3/pins_arduino.h
---

## Installing ESP32 Arduino on Arduino IDE

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
    ![]({{ site.url }}/assets/images/tutorials/hello-world-esp32s3-arduino-setting.png)
1. Compile and upload the firmware
1. View the serial monitor
