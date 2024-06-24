---
date_updated: 2024-06-24
layout: tutorials
title: Pass by Value and Reference with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-esp32c3-prototype.jpg
  console: pass-by-value-reference-arduino-esp32c3-console.png
features:
  - pass
  - value
  - reference
  - pointer
  - esp32c3
video: SWIAXcH9MuA
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
prerequisites:
  - name: Blinky with Arduino on ESP32-c3
    url: ./blinky-arduino-esp32c3
---

This simple code the difference between pass by value and pass by reference in C++ using Arduino ESP32-C3.

### Pass by Value

- Syntax Simplicity: The syntax for passing by reference is straightforward and more readable compared to pointers.
- Automatic Dereferencing: The function parameter is treated like an alias to the original variable, so you do not need to use the dereference operator (*).
- No Null References: References must be initialized when declared, so you cannot have a null reference, which eliminates some potential runtime errors.

### Pass by Reference

- Syntax Simplicity: The syntax for passing by reference is straightforward and more readable compared to pointers.
- Automatic Dereferencing: The function parameter is treated like an alias to the original variable, so you do not need to use the dereference operator (*).
- No Null References: References must be initialized when declared, so you cannot have a null reference, which eliminates some potential runtime errors.

### Pass by reference with pointers

- Explicit Address Handling: You explicitly pass the address of the variable using the address-of operator (&) and use the dereference operator (*) to access and modify the value.
- Null Pointers: Pointers can be null, providing flexibility but also the possibility of null pointer dereferencing errors.
- C Compatibility: Pointers are compatible with C, making this method necessary when working in C or interfacing with C libraries.

| Aspect                    | Pass-by-Value                       | Pass-by-Reference                  | Pass-by-Reference with Pointers    |
|---------------------------|-------------------------------------|------------------------------------|------------------------------------|
| **Syntax**                | `int value`                         | `int &value`                       | `int *value`                       |
| **Usage**                 | Operates on a copy of the variable  | Direct access to variable          | Use of address-of (`&`) and dereference (`*`) operators |
| **Modification**          | Does not affect original variable   | Affects original variable          | Affects original variable          |
| **Initialization**        | N/A                                 | Must be initialized                | Can be null                        |
| **Readability**           | Most readable, simplest             | More readable and less error-prone | Requires explicit pointer handling |
| **Compatibility**         | Works in both C and C++             | C++ only                           | Works in both C and C++            |
| **Performance**           | Copies data (may be slower for large data) | No copying, efficient            | No copying, efficient              |
