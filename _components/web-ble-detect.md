---
layout: components
title: Web BLE detect
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - BLE
references:
  - name: Chrome Web Bluetooth / Device Info Sample
    url: https://googlechrome.github.io/samples/web-bluetooth/device-info.html
prerequisites:
  - name: Can I Use Web BLE?
    url: https://caniuse.com/#feat=web-bluetooth
---

Connect to a BLE device with a given device name and display some device info in the Chrome browser console.

Ensure the browser side of the code is also implemented with `web-ble-detect.html`.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}" class="button is-primary">Download code</a> <a href="{{ site.url }}/{{ page.path | remove: '_components/' | replace:'.md','' }}" class="button is-primary">View demo</a>

{% highlight html %}{% include_relative {{ page.path | remove: "_components/" | remove: ".md" }}/{{ page.path | remove: "_components/" | remove: ".md" }}.html %}{% endhighlight %}
