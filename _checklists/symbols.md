---
layout: checklists
title: symbols
description: Creating symbols
---

# Symbols

## New

- [ ] Follow the [reference designator standard](https://en.wikipedia.org/wiki/Reference_designator)

## Chip

- [ ] Arrange pins around a rectangle
- [ ] Group pins according to function, not according to the physical chip
- [ ] Place `Vcc` pin on the top of the rectangle
- [ ] Place `GND` pin on the bottom of the rectangle
- [ ] Fill the rectangle with background color yellow
- [ ] Add datasheet URL
- [ ] Label number numbers as according to physical pin placement clockwise

## Footprint

- [ ] Label power pins `Vcc`, `GND`, `5V`, `3V3`, and `EN`, `RST` pins on silkscreen
- [ ] Match chip placement on PCB with the physical package to indicate `o` or `◖` on the silkscreen

## References

1. [Kicad 5 recipe: How to create a new component (symbol)](https://www.txplore.com/blog/18317/kicad5-recipe-how-to-create-a-new-component-symbol)
