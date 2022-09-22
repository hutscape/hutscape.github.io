---
layout: tutorials
title: Hello world with ESPHome
dependancies:
  - name: ESPHome
    url: https://esphome.io/guides/installing_esphome.html
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  prototype: hello-esp32s3-prototype.jpg
features:
  - esphome
  - esp32s3
code: yaml
references:
  - name: Install ESPHome
    url: https://esphome.io/guides/installing_esphome.html
  - name: Getting Started with the ESPHome Command Line
    url: https://esphome.io/guides/getting_started_command_line.html#
  - name: ESPHome config by Alex Mekkering
    url: https://alexmekkering.github.io/esphome-config/
---

### Installing ESPHome CLI

```sh
$ python --version
Python 3.10.6

$ pip3 --version
pip 22.2.2

$ pip3 install wheel
$ pip3 install esphome
$ esphome version
Version: 2022.8.3
```

### Compile and upload

```sh
esphome run hello-esphome.yaml
```
