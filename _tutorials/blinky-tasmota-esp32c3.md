---
layout: tutorials
title: Blinky with Tasmota on ESP32-C3
dependancies:
  - name: Esptool
    url: https://github.com/espressif/esptool
  - name: Tasmota binaries
    url: http://ota.tasmota.com/tasmota32/release/
  - name: Tasmota web installer
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
  - name: (Optional) Power supply unit
    url: https://s.click.aliexpress.com/e/_AUols3
  - name: (Optional) USB Female to 4MM Banana Plug Test Lead
    url: https://s.click.aliexpress.com/e/_DmRto71
has_code: false
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  schematic: blinky-gpio3-esp32c3-schematic.png
features:
  - tasmota
  - esp32c3
  - toggle
  - led
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Tasmota getting started
    url: https://tasmota.github.io/docs/Getting-Started/
---

### Upload firmware with Tasmota web installer

1. Plug into the `USB` port of the board and check the port

    ```sh
    $ ls /dev/cu.*

    /dev/cu.Bluetooth-Incoming-Port  /dev/cu.MINIJAMBOXbyJawbone  /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```
1. Visit the [Tasmota web installer](https://tasmota.github.io/install/) on the browser
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-1.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-1.png)
1. Choose `ESP32-C3` in the dropdown list
1. Connect to the port e.g. `/dev/cu.SLAB_USBtoUART`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-2.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-2.png)

1. Install Tasmota
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-3.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-3.png)

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-4.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-4.png)

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-5.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-5.png)

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-6.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-step-6.png)

### Connect to WiFi using the Tasmota web installer

1. Ensure automatic configure wifi dialogue is seen

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-1.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-1.png)
1. Connect to the WiFi with SSID and password

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-2.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-2.png)
1. Visit the device URL at `10.0.3.10`

    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-3.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-wifi-step-3.png)

### Control LED via the web

1. Wire up a simple LED to `GPIO3`
    [![]({{ site.url }}/assets/images/tutorials/blinky-gpio3-esp32c3-schematic.png)]({{ site.url }}/assets/images/tutorials/blinky-gpio3-esp32c3-schematic.png)
1. Plug in the board to an external power supply.
1. Click `Configuration`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-config.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-config.png)
1. Click `Configure Module`
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-config-module.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-config-module.png)
1. Change `GPIO3` to `Relay` number 1 and save configuration
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-relay.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-relay.png)
1. Go back to the main menu after device restart
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-main.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-main.png)
1. Click the toggle `ON` and `OFF` to control the LED
    [![]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-toggle.png)]({{ site.url }}/assets/images/tutorials/blinky-tasmota-esp32c3-toggle.png)

### Rollback from Tasmota to Arduino

1. Follow the [rollback steps](./rollback-esp32c3) to erase the flash.
1. [Flash in blinky with ESP-IDF](./blinky-esp-idf-esp32c3).
1. [Flash in blinky with Arduino](./blinky-arduino-esp32c3).
