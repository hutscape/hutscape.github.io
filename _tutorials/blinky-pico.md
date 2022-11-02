---
layout: tutorials
title: Blinky with RaspberryPI Pico
dependancies:
  - name: Pico toolchain
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
dev_board: RaspberryPI Pico
chips:
  - RP2040
firmware:
  - C
  - C++
components:
  - name: RaspberyPI Pico
    url: https://amzn.to/3gLC95r
video: zteyBpARo1A
images:
  console: blinky-pico-console.png
  prototype: blinky-pico-prototype.jpg
references:
  - name: Pico examples blinky C code
    url: https://github.com/raspberrypi/pico-examples/tree/master/blink
  - name: Getting started with RPi pico - installing toolchains and hello world
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
  - name: Chapter 7 - Creating your own Project, Getting started with Raspberry Pi Pico
    url: https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf
  - name: Raspberry Pi Pico SDK
    url: https://raspberrypi.github.io/pico-sdk-doxygen/
code: c
source_code_path: blinky-pico.c
---

Create a blinky LED with RaspberryPI Pico board with `RP2040` microcontroller using the native C/C++ SDK.

## Install the toolchain on macOS

Refer [Getting started with Raspberry Pi Pico](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf) PDF document for Linux or Windows.

```sh
cd CHOOSE_YOUR_PICO_SDK_PATH
git clone git@github.com:raspberrypi/pico-sdk.git

brew install cmake
brew tap ArmMbed/homebrew-formulae
brew install arm-none-eabi-gcc

# vs code extensions
code --install-extension marus25.cortex-debug
code --install-extension ms-vscode.cmake-tools
code --install-extension ms-vscode.cpptools

# environment variable for the pico-sdk installation apth
export PICO_SDK_PATH=~/PATH/TO/pico-sdk
```
