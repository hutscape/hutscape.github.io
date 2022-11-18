---
layout: tutorials
title: Web BLE Read changing GATT values

dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRF52 nrfutil
    url: https://github.com/adafruit/Adafruit_nRF52_nrfutil
chips:
  - nRF52
dev_board: Adafruit Feather Bluefruit
components:
  - name: Adafruit Feather Bluefruit
    url: https://amzn.to/3ndsBlF
features:
  - BLE
  - GATT
images:
  browser: web-ble-gatt-browser.png
  console: web-ble-gatt-console.png
references:
  - name: Chrome Web Bluetooth / Device Info Sample
    url: https://googlechrome.github.io/samples/web-bluetooth/device-info.html
  - name: Web Bluetooth Specs
    url: https://webbluetoothcg.github.io/web-bluetooth
  - name: Can I Use browser compatibility
    url: https://caniuse.com/#feat=mdn-api_bluetooth
  - name: Google Chrome developers BLE
    url: https://developers.google.com/web/updates/2015/07/interact-with-ble-devices-on-the-web
  - name: Chrome Web Bluetooth samples
    url: https://googlechrome.github.io/samples/web-bluetooth/index.html
  - name: Adafruit nRF52 board
    url: https://www.adafruit.com/product/3406
  - name: Adafruit nRF52 Arduino library
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: Adafruit nRF52 Arduino library samples
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/tree/master/libraries/Bluefruit52Lib/examples
  - name: BLE basic terminologies
    url: https://www.silabs.com/community/wireless/bluetooth/knowledge-base.entry.html/2018/05/30/ble_basics_masters-i4n9
  - name: Bluetooth GATT services
    url: https://www.bluetooth.com/specifications/gatt/services/
  - name: Bluetooth GATT service Environmental sensing
    url: https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Services/org.bluetooth.service.environmental_sensing.xml
  - name: Bluetooth GATT characteristics
    url: https://www.bluetooth.com/specifications/gatt/characteristics/
  - name: Bluetooth UV Index GATT Characteristics
    url: https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml
prerequisites:
  - name: Web BLE detect
    url: ./web-ble-detect
  - name: Can I Use Web BLE?
    url: https://caniuse.com/#feat=web-bluetooth
---

Connect to a BLE device with BLE GATT Service of **Environmental Sensing** and BLE GATT Characteristic of **UV Index** and read the values from the Chrome browser console when the readings are updated.

Ensure the browser side of the code is also implemented with `web-ble-gatt.html`.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}" class="button is-primary">Download code</a> <a href="{{ site.url }}/{{ page.path | remove: '_tutorials/' | replace:'.md','' }}" class="button is-primary">View demo</a>

{% highlight html %}{% include_relative code/{{ page.path | remove: "_tutorials/" | remove: ".md" }}/{{ page.path | remove: "_tutorials/" | remove: ".md" }}.html %}{% endhighlight %}
