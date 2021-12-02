---
layout: tutorials
title: Debug print with ifdef and a header file
firmware:
  - Arduino
dev_board: Arduino M0
chips:
  - SAMD21
features:
  - debug
  - ifdef
  - print
  - header
components:
  - name: RobotDyn M0 Mini
    url: https://s.click.aliexpress.com/e/_AZG8aU
images:
  prototype: blinky-m0-prototype.jpg
  console: arduino-debug-console.png
video: 7kRlQDxGR9A
references:
  - name: ifdef DEBUG
    url: https://www.youtube.com/watch?v=kBTM0dLzNXk
  - name: Toggling Debug Code
    url: https://forum.arduino.cc/index.php?topic=46900.msg338645#msg338645
  - name: Example with Debug Utils
    url: https://github.com/SensorsIot/Pre-Compiler-Directives
---

Some patterns for toggling on and off debug print messages in Arduino firmware with `#ifdef` and a header file `DebugUtils.h`.
