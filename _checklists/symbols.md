---
layout: checklists
title: Symbols
description: Creating symbols in an ECAD software
checks:
  - title: New
    list: Follow the standard reference designator standard
  - title: Chip
    list: [
      Arrange pins around a rectangle,
      Group pins according to function, not according to the physical chip,
      Place <code>Vcc</code> pin on the top of the rectangle,
      Place <code>GND</code> pin on the bottom of the rectangle,
      Fill the rectangle with background color yellow,
      Add datasheet URL,
      Label number numbers as according to physical pin placement clockwise,
    ]
  - title: Footprint
    list: [
      "Label module power pins <code>Vcc</code>, <code>GND</code>, <code>5V</code>, <code>3V3</code>, and <code>EN</code>, <code>RST</code> pins on silkscreen",
      Match chip placement on PCB with the physical package to indicate <code>o</code> or <code>◖</code> on the silkscreen
    ]
references:
  - name: Reference designator standard
    url: https://en.wikipedia.org/wiki/Reference_designator
  - name: Kicad 5 recipe - How to create a new component symbol
    url: https://www.txplore.com/blog/18317/kicad5-recipe-how-to-create-a-new-component-symbol
---
