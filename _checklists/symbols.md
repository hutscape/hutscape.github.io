---
layout: checklists
title: Ω Symbols
description: Creating symbols in an ECAD software
checks:
  - title: New
    list:
      - name: Follow the <a href="https://en.wikipedia.org/wiki/Reference_designator">reference designator standard</a>
  - title: Chip
    list:
      - name: Arrange pins around a rectangle
      - name: Fill the rectangle with background color yellow
      - name: Group pins according to function, not according to the physical chip
      - name: Place positive power pins at the top, E.g. <code>Vcc</code>
      - name: Place negative power pins at the bottom, E.g. <code>GND</code>
      - name: Place input pins at the left as much as possible
      - name: Place output pins at the right as much as possible
      - name: Group functional pins together
      - name: Add datasheet URL

references:
  - name: Reference designator standard
    url: https://en.wikipedia.org/wiki/Reference_designator
  - name: Kicad 5 recipe - How to create a new component symbol
    url: https://www.txplore.com/blog/18317/kicad5-recipe-how-to-create-a-new-component-symbol
---
