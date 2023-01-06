---
layout: tutorials
title: Hello world ESP32-S3 with Rust
dependancies:
  - name: Rust build
    url: https://github.com/esp-rs/rust-build
  - name: ESP IDF Template
    url: https://github.com/esp-rs/esp-idf-template
chips:
  - ESP32-S3-WROOM-1-N8R2
dev_board: ESP32-S3-DevKitC-1
components:
  - name: ESP32-S3-DevKitC-1-N8R2
    url: https://www.aliexpress.com/item/1005003979778978.html
images:
  console: blinky-rust-esp32s3-console.png
  prototype: blinky-esp32s3-gpio5.jpg
  list:
    - image: blinky-esp32s3-gpio5-top.jpg
      description: Use GPIO5 to add a simple external LED
features:
  - rust
  - serial
  - esp32s3
code: rust
source_code_path: src/main.rs
references:
  - name: Buy the official Espressif devkit
    url: https://www.espressif.com/en/products/devkits/esp32-devkitc/overview
  - name: Schematic of ESP32-S3-DEVKITC-1 V1
    url: https://dl.espressif.com/dl/SCH_ESP32-S3-DEVKITC-1_V1_20210312C.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html#pin-layout
  - name: Rust build for ESP
    url: https://github.com/esp-rs/rust-build
  - name: ESP IDF Template
    url: https://github.com/esp-rs/esp-idf-template
  - name: Rust book
    url: https://esp-rs.github.io/book/
---

### Install dependancies

1. [Install for Xtensa](https://github.com/esp-rs/rust-build#installation-commands)
    ```
    git clone https://github.com/esp-rs/rust-build.git
    cd rust-build
    ./install-rust-toolchain.sh
    . export-esp.sh
    ```
1. Set `$PATH`
    ```
    export LIBCLANG_PATH="~/.espressif/tools/xtensa-esp32-elf-clang/esp-14.0.0-20220415-x86_64-apple-darwin/lib/"
    export PATH="~/.espressif/tools/xtensa-esp32-elf-gcc/8_4_0-esp-2021r2-patch3-x86_64-apple-darwin/bin/:~/.espressif/tools/xtensa-esp32s2-elf-gcc/8_4_0-esp-2021r2-patch3-x86_64-apple-darwin/bin/:~/.espressif/tools/xtensa-esp32s3-elf-gcc/8_4_0-esp-2021r2-patch3-x86_64-apple-darwin/bin/:$PATH"
    ```
1. Install Cargo [sub-commands](https://github.com/esp-rs/esp-idf-template#install-cargo-sub-commands)
    ```
    cargo install cargo-generate
    cargo install ldproxy
    cargo install espflash
    cargo install espmonitor
    ```
1. [Generate the project](https://github.com/esp-rs/esp-idf-template#generate-the-project)
    ```sh
    $ cargo generate --vcs none --git https://github.com/esp-rs/esp-idf-template cargo

    🤷   Project Name : hello
    🔧   Destination: /Users/sayanee/Desktop/hello ...
    🔧   Generating template ...
    ✔ 🤷   STD support · true
    ✔ 🤷   ESP-IDF native build version (v4.3.2 = previous stable, v4.4 = stable, mainline = UNSTABLE) · v4.4
    ? 🤷   Configure project to use Dev Containers (VS Code, GitHub Codespaces and Gitpod)? (beware: Dev Cont
    ✔ 🤷   Configure project to use Dev Containers (VS Code, GitHub Codespaces and Gitpod)? (beware: Dev Containers not available for esp-idf v4.3.2) · false
    ✔ 🤷   MCU · esp32s3
    [ 1/10]   Done: .cargo/config.toml
    [ 2/10]   Done: .cargo
    [ 3/10]   Done: .gitignore
    [ 4/10]   Done: .vscode
    [ 5/10]   Done: Cargo.toml
    [ 6/10]   Done: build.rs
    [ 7/10]   Done: rust-toolchain.toml
    [ 8/10]   Done: sdkconfig.defaults
    [ 9/10]   Done: src/main.rs
    [10/10]   Done: src
    🔧   Moving generated files into: `/Users/sayanee/Desktop/hello`...
    ✨   Done! New project created /Users/sayanee/Desktop/hello
    ```

### Compile

1. Change directory into the project name
  ```sh
    $ cd hello
  ```
1. Edit file `src/main.rs` with the blinky code
1. Edit `Cargo.toml` to add dependancies
1. [Compile / build](https://github.com/esp-rs/esp-idf-template#build) the project
  ```sh
  $ cargo build
  ```

## Upload the firmware

1. Plug in the board into the USB port (not the UART port).
1. [Upload / Flash](https://github.com/esp-rs/esp-idf-template#flash)
  ```sh
  espflash /dev/cu.usbmodem14101 target/xtensa-esp32s3-espidf/debug/hello
  ```

## View the logs

Start the [serial monitor](https://github.com/esp-rs/esp-idf-template#monitor)
  ```sh
  espmonitor /dev/cu.usbmodem14101
  ```
