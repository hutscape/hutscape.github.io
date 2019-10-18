---
layout: components
title: Web BLE Read changing GATT values
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - BLE
references:
  - name: Web Bluetooth / Read Characteristic Value Changed Sample
    url: https://googlechrome.github.io/samples/web-bluetooth/read-characteristic-value-changed.html
prerequisites:
  - name: Web BLE
    url: ./web-ble
  - name: Can I Use Web BLE?
    url: https://caniuse.com/#feat=web-bluetooth
---

Connect to a BLE device with BLE GATT Service of **Environmental Sensing** and BLE GATT Characteristic of **UV Index** and read the values from the Chrome browser console when the readings are updated.

Ensure the browser side of the code is also implemented with `web-ble-gatt.html`.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}" class="button is-primary">Download code</a> <a href="{{ site.url }}/{{ page.path | remove: '_components/' | replace:'.md','' }}" class="button is-primary">View demo</a>

{% highlight html %}{% include_relative {{ page.path | remove: "_components/" | remove: ".md" }}/{{ page.path | remove: "_components/" | remove: ".md" }}.html %}{% endhighlight %}
