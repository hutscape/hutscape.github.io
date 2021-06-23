---
layout: checklists
title: 📑 Schematic
description: Good schematics checklist
checks:
  - title: Good schematic checklist
    list:
      - name: Refer to the correct datasheet version number and the last updated date for the component
      - name: Separate double wire junctions
      - name: Use dots for wire junctions, not crosses
      - name: Make symbols for similar devices consistent E.g. resistors
      - name: Name every part with a unique designator
      - name: Align wires and components horizontally or vertically
      - name: Label pin numbers on the outside of a symbol, signal names on the inside
      - name: Place text orientation consistently E.g. horizontal
      - name: Place components from left to right with a logical flow
      - name: Put higher voltage towards the top
      - name: Put positive voltages <code>Vcc</code> up and negative voltages <code>GND</code> down
      - name: Separate schematic into logical blocks
      - name: Make the schematic fit in <code>A4</code> or </code>A3</code> standard sized papers
      - name: Place decoupling capacitors next to their devices
      - name: Keep names reasonably short
      - name: Use uppercase symbol names
  - title: Extra things to include in a schematic
    list:
      - name: URL references
      - name: Pin mappings
      - name: Notes
      - name: Power LED
      - name: Battery measurement circuit
      - name: Microcontroller bootloader circuit E.g. SWD JTAG
      - name: TX/RX LED
      - name: Test points
      - name: Multiple LED indictors to show power on each rail and some digital functioning
      - name: Isolation jumpers to isolate power from some circuits for debugging
  - title: Title blocks
    list:
      - name: Include name of the circuit
      - name: Include name of the schematic designer
      - name: Include date of creation
      - name: Include page of the schematic
      - name: Include revision number
      - name: Include Author or Team name
      - name: (Optional) Include website for more information about the project
references:
  - name: The Top 10 Tips to Draw Your Next Schematic Design Like a Pro
    url: https://www.autodesk.com/products/eagle/blog/top-10-tips-draw-next-schematic-design-like-pro/
  - name: Rules and guidelines for drawing good schematics
    url: https://electronics.stackexchange.com/questions/28251/rules-and-guidelines-for-drawing-good-schematics
  - name: How to draw schematic diagrams
    url: http://opencircuitdesign.com/xcircuit/goodschem/goodschem.html
---
