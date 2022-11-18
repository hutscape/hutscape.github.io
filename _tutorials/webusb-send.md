---
layout: tutorials
title: Web USB send to browser

dependancies:
  - name: WebUSB Compatible Arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
firmware:
  - Arduino
chips:
  - SAMD21
dev_board: RobotDyn M0 mini
features:
  - WebUSB
video: xV1l5SdE8sk
references:
  - name: Access USB Devices on the Web
    url: https://developers.google.com/web/updates/2016/03/access-usb-devices-on-the-web
  - name: List of USB IDs
    url: http://www.linux-usb.org/usb.ids
  - name: List of compatible arduino hardware
    url: https://github.com/webusb/arduino#compatible-hardware
  - name: Web USB demo
    url: https://webusb.github.io/arduino/demos/console/
  - name: Web USB serial.js
    url: https://github.com/webusb/arduino/blob/gh-pages/demos/serial.js
prerequisites:
  - name: Web USB detect
    url: ./webusb-detect
---

Send a simple sentence from the MCU to the browser on laptop.

Start the web browser code with `make server`.

Ensure the browser side of the code is also implemented with `serial.js`.

<a href="https://github.com/hutscape/hutscape.github.io/tree/master/{{page.path | replace:'.md',''}}" class="button is-primary">Download code</a>

{% highlight html %}{% include_relative code/{{ page.path | remove: "_tutorials/" | remove: ".md" }}/{{ page.path | remove: "_tutorials/" | remove: ".md" }}.html %}{% endhighlight %}
