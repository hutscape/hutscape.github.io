---
layout: tutorials
title: Blinky ESP8266
dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
chips:
  - ESP8266
dev_board: WeMos D1 Mini
video: Os5sGlw3PV0
components:
  - name: WeMos D1 Mini
    url: https://s.click.aliexpress.com/e/_AqH5EC
images:
  console: blinky-esp8266-console.png
  prototype: blinky-esp8266-prototype.jpg
---

`LED_BUILTIN` can be referred as the pin for the on-board LED. It has a reverse logic.

- `HIGH` is LED off
- `LOW` is LED on

## Big Sur MacOSX update

Error on uploading:

```sh
pyserial or esptool directories not found next to this upload.py tool.
An error occurred while uploading the sketch
```

The solution is to [edit the file](https://forum.arduino.cc/index.php?topic=702144.msg4793318#msg4793318) `~/Library/Arduino15/packages/esp8266/hardware/esp8266/2.7.4/tools/pyserial/serial/tools/list_ports_osx.py` `L29-L30`. Fix the relative paths for `IOKit` and `CoreFoundation` to absolute paths.
