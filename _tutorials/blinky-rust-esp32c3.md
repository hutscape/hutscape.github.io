---
layout: tutorials
title: Blinky with Rust on ESP32-C3
dependancies:
  - name: Rust build
    url: https://github.com/esp-rs/rust-build
  - name: ESP IDF Template
    url: https://github.com/esp-rs/esp-idf-template
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  schematic: blinky-gpio3-esp32c3-schematic.png
  console: blinky-rust-esp32c3-console.png
features:
  - rust
  - blinky
  - esp32c3
code: rust
source_code_path: src/main.rs
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Rust build for ESP
    url: https://github.com/esp-rs/rust-build
  - name: ESP IDF Template
    url: https://github.com/esp-rs/esp-idf-template
  - name: Rust book
    url: https://esp-rs.github.io/book/
---

### Install dependancies

1. [Install for RISC-V](https://github.com/esp-rs/rust-build#risc-v-installation)
    ```
    rustup target add riscv32imc-unknown-none-elf
    ```
1. Install Cargo [sub-commands](https://github.com/esp-rs/esp-idf-template#install-cargo-sub-commands)
    ```
    cargo install cargo-generate
    cargo install ldproxy
    cargo install espup
    cargo install espflash

    cargo install --list
    ```
1. [Generate the project](https://github.com/esp-rs/esp-idf-template#generate-the-project)
    ```sh
    cargo generate --vcs none --git https://github.com/esp-rs/esp-idf-template cargo
    ```

    Typical output:
    ```
    🤷   Project Name: blinky-rust-esp32c3
    🔧   Destination: /Users/sayanee/Desktop/blinky-rust-esp32c3 ...
    🔧   project-name: blinky-rust-esp32c3 ...
    🔧   Generating template ...
    ✔ 🤷   STD support · true
    ✔ 🤷   MCU · esp32c3
    ✔ 🤷   ESP-IDF native build version (v4.3.2 = previous stable, v4.4 = stable, mainline = UNSTABLE) · v4.4
    ? 🤷   Configure project to use Dev Containers (VS Code, GitHub Codespaces and Gitpod)?
    ✔ 🤷   Configure project to use Dev Containers (VS Code, GitHub Codespaces and Gitpod)?
    🔧   Moving generated files into: `/Users/sayanee/Desktop/blinky-rust-esp32c3`...
    ✨   Done! New project created /Users/sayanee/Desktop/blinky-rust-esp32c3
    ```

### Compile

1. Change directory into the project name
  ```sh
    $ cd blinky-rust-esp32c3
  ```
1. Edit file `src/main.rs` with the [blinky code](#code).
1. Edit `Cargo.toml` to add dependencies
  ```toml
  [dependencies]
  embedded-hal = "1.0.0-alpha.8"
  esp-idf-sys = { version = "0.31.11", features = ["binstart"] }
  esp-idf-hal = "0.38.1"
  ```
1. [Compile / build](https://github.com/esp-rs/esp-idf-template#build) the project
  ```sh
  $ cargo build
  ```

## Upload the firmware

1. Plug in the board into the USB port.
1. Check the port address

    ```sh
    $ ls /dev/cu.*
    /dev/cu.SLAB_USBtoUART  /dev/cu.usbserial-1410
    ```

1. [Upload / Flash](https://github.com/esp-rs/esp-idf-template#flash)
  ```sh
  espflash /dev/cu.SLAB_USBtoUART target/riscv32imc-esp-espidf/debug/blinky-rust-esp32c3
  ```

## View the logs

Start the [serial monitor](https://github.com/esp-rs/esp-idf-template#monitor)
  ```sh
  espmonitor /dev/cu.SLAB_USBtoUART
  ```
