---
layout: tutorials
title: Blinky with Tasmota on ESP32-S3
dependancies:
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: Tasmota binaries
    url: http://ota.tasmota.com/tasmota32/release/
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
  - name: (Optional) Power supply unit
    url: https://s.click.aliexpress.com/e/_AUols3
  - name: (Optional) USB Female to 4MM Banana Plug Test Lead
    url: https://s.click.aliexpress.com/e/_DmRto71
prerequisites:
  - name: Blinky with Arduino on ESP32-S3
    url: blinky-arduino-esp32s3
has_code: false
images:
  prototype: blinky-tasmota-prototype.jpg
  schematic: blinky-arduino-esp32s3-schematic.png
  list:
    - image: blinky-esp32s3-gpio5-top.jpg
      description: Use GPIO5 to add a simple external LED
features:
  - tasmota
  - esp32s3
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Tasmota getting started
    url: https://tasmota.github.io/docs/Getting-Started/
  - name: Tasmota flashing with estool.py
    url: https://tasmota.github.io/docs/Getting-Started/#flashing
  - name: Error - Invalid image block, can't boot
    url: https://github.com/arendst/Tasmota/discussions/14973#discussioncomment-2251403
---

### Upload firmware with esptool

1. Download `tasmota32s3cdc.factory.bin` from [ESP32 current release](http://ota.tasmota.com/tasmota32/release/)
1. Plug into the `USB` port of the board and check the address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.usbmodem14101
    ```
1. Erase the flash memory with `esptool.py`

    ```sh
    $ esptool.py --port  /dev/cu.usbmodem14101 erase_flash
    ```
1. [Flash](https://docs.espressif.com/projects/esptool/en/latest/esp32s3/esptool/flash-modes.html) the binary using `esptool.py`

    ```sh
    $ esptool.py --port /dev/cu.usbmodem14101 write_flash --flash_mode dio --flash_size 4MB 0x0 tasmota32s3cdc.factory.bin
    ```
1. Access the serial monitor to see the message on the active web server
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-serial.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-serial.png)


### Connect to WiFi

1. Change to an external power supply or a USB hub
1. Select the WiFi SSID starting with `tasmota-`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-ap.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-ap.png)
1. Connect the board to another WiFi from the popup
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-wifi.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-wifi.png)
1. Change back to the original WiFi and access `10.0.3.10` in the browser
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-ip.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-ip.png)

### Control LED

1. Wire up a simple LED to `GPIO5`
    [![]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)]({{ site.url }}/assets/images/tutorials/blinky-arduino-esp32s3-schematic.png)
1. Click `Configuration`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-config.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-config.png)
1. Click `Configure Module`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-config-module.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-config-module.png)
1. Change `GPIO5` to `Relay` number 1
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-relay.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-relay.png)
1. Save the configuration
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-save.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-save.png)
1. Visit `http://10.0.3.10/cm?cmnd=GPIO` to see the configuration change in `GPIO5`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-commands.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-commands.png)
1. Click the toggle `ON` and `OFF` to control the LED
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-toggle.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32s3-toggle.png)

### Rollback from Tasmota to Arduino

1. Follow the [rollback steps](./rollback-esp32s3) to erase the flash.
1. [Flash in blinky with ESP-IDF](./blinky-esp-idf-esp32s3).
1. [Flash in blinky with Arduino](./blinky-arduino-esp32s3).
