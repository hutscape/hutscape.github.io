---
layout: tutorials
title: Web BLE detect
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - BLE
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

prerequisites:
  - name: Can I Use Web BLE?
    url: https://caniuse.com/#feat=web-bluetooth
---

Connect to a BLE device with a given device name and display some device info in the Chrome browser console.

Ensure the browser side of the code is also implemented with `web-ble-detect.html`.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}" class="button is-primary">Download code</a> <a href="{{ site.url }}/{{ page.path | remove: '_tutorials/' | replace:'.md','' }}" class="button is-primary">View demo</a>

{% highlight html %}{% include_relative {{ page.path | remove: "_tutorials/" | remove: ".md" }}/{{ page.path | remove: "_tutorials/" | remove: ".md" }}.html %}{% endhighlight %}
