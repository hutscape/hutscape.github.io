---
date_updated: 2024-03-21
layout: tutorials
title: Measure power consumption with nRF Power Profiler 2 and ESP32-C3
dependancies:
  - name: Download nRF Connect for Desktop
    url: https://www.nordicsemi.com/Products/Development-tools/nRF-Connect-for-desktop
dev_board: nRF Power Profiler 2
components:
  - name: nRF Power Profiler 2
    url: https://www.nordicsemi.com/Products/Development-hardware/Power-Profiler-Kit-2
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: nrf-power-profiler-esp32c3-prototype.jpg
  schematic: external-wakeup-arduino-esp32c3-schematic.png
  console: nrf-power-profiler-esp32c3-graph.png
references:
  - name: Getting started with nRF Power Profiler ii
    url: https://www.nordicsemi.com/Products/Development-hardware/Power-Profiler-Kit-2/GetStarted?lang=en#infotabs
features:
  - power
  - consumption
  - current
  - nrf
  - profiler
  - kit
  - esp32-c3
  - PPK2
  - ppk2
  - measurement
  - instrument
prerequisites:
  - name: External wakeup with Arduino on ESP32-C3
    url: ./external-wakeup-arduino-esp32c3
has_code: false
---

1. Use the [External wakeup with Arduino on ESP32-C3](./external-wakeup-arduino-esp32c3) tutorial to prepare the sample code.
1. Connect the ESP32-C3-DevKitM-1 to the nRF Power Profiler 2 with `Vout` to `5V` and `GND` pins. Ensure the device is **only powered** from the nRF Power Profiler 2.
1. Connect the nRF Power Profiler 2 to your computer using the USB cable via the `USB DATA/POWER`.
    ![]({{ site.url }}/assets/images/tutorials/nrf-power-profiler-esp32c3-connections.jpg)
1. Open the [nRF Connect for Desktop](https://www.nordicsemi.com/Products/Development-tools/nRF-Connect-for-desktop) application.
1. Click `OPEN` for the `Power Profiler` app.
    ![]({{ site.url }}/assets/images/tutorials/nrf-power-profiler-esp32c3-app.png)
1. Select `PPK2` from the list of devices on top left-hand corner.
    ![]({{ site.url }}/assets/images/tutorials/nrf-power-profiler-esp32c3-device.png)
1. Select the parameters for the measurement in the sidebar on the left-hand side:
    1. Power supply mode to `Source meter`
    1. Set the `Supply Voltage` to `5000mV`
    1. Enable power output
    1. Set samples per second E.g. `10`
    1. Select the sample time E.g. `20s`
    1. Click on the `Start` button to start the measurement

    ![]({{ site.url }}/assets/images/tutorials/nrf-power-profiler-esp32c3-params.png)
1. Press the push button to wake up the ESP32-C3 to blink and then go to deep sleep.
    ![]({{ site.url }}/assets/images/tutorials/nrf-power-profiler-esp32c3-graph.png)
1. Select the portion of the graph with `SHIFT` to display the average current and other values.
1. Calculate [average battery life](https://www.digikey.com/en/resources/conversion-calculators/conversion-calculator-battery-life) using the average current and battery capacity.
