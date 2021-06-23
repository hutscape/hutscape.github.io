---
layout: checklists
title: 📆 Schedule
description: Checklist for various activities for each phase of the schedule
checks:
  - title: Concept
    list:
      - name: Research for modules
      - name: Research for similar projects
      - name: Research for datasheets
      - name: Settle on a project name
      - name: Research on power
      - name: Order modules, parts, power required for component testing
      - name: Note the prices for prototype items
      - name: Note the time taken to receive all the parts
      - name: Ensure various components work with both hardware modules and firmware
      - name: Finalize the power tree
      - name: Make a theoretical power consumption calculation
      - name: Make a mechanical and physical layout of the PCB housing
  - title: Design
    list:
      - name: Create new components
      - name: Ensure DRC passes
      - name:  Go through <a href="https://github.com/azonenberg/pcb-checklist/blob/master/schematic-checklist.md">schematic checklist</a>
      - name: Create a BOM list
      - name: Ensure vendors have the stock
      - name: Ensure edge cuts can house all the components
      - name: Note all the dimensions of major components
      - name: Note all connectors to external links
      - name: Layout the PCB footprint
      - name: Ensure ERC passes
      - name: Add version, name, year, logos on the silkscreen
      - name: Add mounting holes
      - name: Go through <a href="https://github.com/azonenberg/pcb-checklist/blob/master/layout-checklist.md">layout checklist</a>
      - name: Go through <a href="https://www.seeedstudio.com/blog/2019/04/05/11-do-it-yourself-pcb-design-for-manufacture-checks-anyone-can-do">PCB manufacturing checks</a>
  - title: Manufacturing
    list:
      - name: Order BOM parts online
      - name: Order PCB manufacturing online
      - name: Note the cost per unit
      - name: Note other charges
  - title: Integration
    list:
      - name: Solder 1 unit
      - name: Ensure continuity check for all power pins
      - name: Do a power on test
      - name: Run the test firmware
      - name: Run the full firmware
---
