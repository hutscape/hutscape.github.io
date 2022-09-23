---
layout: tutorials
title: Define options
dev_board: Arduino UNO
firmware:
  - Arduino
chips:
  - ATmega328P
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
features:
  - define
  - variables
  - options
  - arduino-cli
  - flags
images:
  console: define-options-console-a.png
  prototype: blinky-arduino-prototype.jpg
references:
  - name: Blink Arduino tutorial
    url: https://www.arduino.cc/en/Tutorial/Blink
  - name: Arduino CLI Pass Flags To Sketch
    url: https://forum.arduino.cc/t/arduino-cli-pass-flags-to-sketch/680474
---

Create options in using different variable values with `#define` statement. The advantage of this method is that the same codebase can be used for different options.

### How to run the example

Run command `make a` to put the `LOCAL_ADDRESS` value as `0xAA`.

![]({{ site.url }}/assets/images/tutorials/define-options-console-a.png)

Run `make b` to put the `LOCAL_ADDRESS` value as `0xBB`.

![]({{ site.url }}/assets/images/tutorials/define-options-console-b.png)

The `make` command will run the `arduino-cli compile` with options to `#define` the `LOCAL_ADDRESS` and `DESTINATION_ADDRESS` values.

```sh
arduino-cli compile --clean --fqbn $(BOARD) --build-property compiler.cpp.extra_flags="-DLOCAL_ADDRESS=0xBB -DDESTINATION_ADDRESS=0xAA" --output-dir $(BUILD) ./
```
