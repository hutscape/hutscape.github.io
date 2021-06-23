---
layout: checklists
title: 🎛 Footprints
description: Create component footprints from scratch
checks:
  - title: Mechanical
    list:
      - name: Refer to the correct datasheet version number
      - name: Ensure the correct unit of measurement is used
      - name: Fix the grid size and unit according to the datasheet unit of measurement
      - name: Use maths and coordinate positions to move and place layer components instead of manually loving them with mouse

  - title: Silkscreen
    list:
      - name: Label all power pins
      - name: Number all pins
      - name: Add bounding box for the component
      - name: Ensure copper pads are not covered by Silkscreen
      - name: "Adhere to <a href='/checklists/standards#text-size'>standard text size</a>"
      - name: Match chip placement on PCB with the physical package to indicate <code>o</code> or <code>◖</code> on the silkscreen
      - name: Add <code>+</code> and <code>-</code> annotations to all power connectors
      - name: Add voltage values to all power connectors
      - name: Add any info on assembly, test and bringing up the board
---
