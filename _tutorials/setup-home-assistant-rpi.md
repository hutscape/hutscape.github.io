---
date_updated: 2024-12-13
layout: tutorials
title: Setup Home Assistant on Raspberry Pi 3
dependancies:
  - name: Home Assistant on Raspberry Pi
    url: https://www.home-assistant.io/installation/raspberrypi/
  - name: Balena Etcher
    url: https://www.balena.io/etcher/
chips:
  - Broadcom BCM2837B0
dev_board: Raspberry Pi 3 Model B+ 2017
components:
  - name: Raspberry Pi 3 Model B+ 2017
    url: https://www.raspberrypi.com/products/raspberry-pi-3-model-b-plus/
  - name: 64GB microSD card A2
    url: https://amzn.to/3DepdTP
has_code: false
images:
  prototype: setup-home-assistant-rpi3-prototype.jpg
features:
  - ha
  - home
  - assistant
  - home-assistant
  - rpi
  - raspberry
references:
  - name: Home Assistant on Raspberry Pi
    url: https://www.home-assistant.io/installation/raspberrypi/
  - name: Raspberry Pi 3 Model B+ 2017
    url: https://www.raspberrypi.com/products/raspberry-pi-3-model-b-plus/
---

### Steps

1. Download RPi 3 image from [Home Assistant](https://www.home-assistant.io/installation/raspberrypi/#downloading-the-home-assistant-image).
1. Flash the image to a microSD card using [Balena Etcher](https://www.balena.io/etcher/).
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-1.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-1.png)
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-2.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-2.png)
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-3.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-3.png)
1. Insert the microSD card into the Raspberry Pi 3.
1. Connect a monitor, keyboard, and mouse to the Raspberry Pi 3.
1. Connect an Ethernet cable to the Raspberry Pi 3.
1. Connect the power cable to the Raspberry Pi 3 from the power source (5V 2.5A at least).
1. The monitor will show the Home Assistant booting up till the CLI login screen.
1. Open a browser on another computer and type [`http://homeassistant.local:8123`](http://homeassistant.local:8123) to access the Home Assistant dashboard.
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-8123.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-8123.png)
1. Open another browser tab to the observer URL [`http://homeassistant.local:4357`](http://homeassistant.local:4357) to monitor the Home Assistant booting up.
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-4357.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-4357.png)
1. Follow the on-screen instructions to complete the Home Assistant setup with onboarding.
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-onboarding-1.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-onboarding-1.png)
    [![]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-onboarding-2.png)]({{ site.url }}/assets/images/tutorials/setup-home-assistant-rpi3-onboarding-2.png)
