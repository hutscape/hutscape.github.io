---
layout: checklists
title: 🪝 Semantic Versioning
description: How to version the PCB schematic and layout
checks:
  - title: Overview
    list:
      - name: Follow the semantic versioning convention of <code>Major.Minor.Patch</code>
  - title: Major
    list:
      - name: Previous manufactured PCB layout cannot be used
      - name: Breaking change in schematic and layout
      - name: Change in a major components such as the microcontroller
      - name: Change in footprint for most components E.g. <code>0805</code> to <code>0603</code>
      - name: Change in board dimension
      - name: Change in general functionality
      - name: Major new components are added or removed in BOM
  - title: Minor
    list:
      - name: Able to use and bodge the previous PCB layout
      - name: New feature that can be easily bodged onto the previous PCB layout E.g. a tiny LED circuit or a cut trace
      - name: Minor new components that are passives E.g. tiny LED circuit or pull-up / pull-down resistors
      - name: New additions to BOM only for passives
  - title: Patch
    list:
      - name: Able to use and bodge the previous PCB layout
      - name: Previous PCB layout can be used with minor bodges
      - name: Able to swap out components with the same footprint E.g. change in capacitor, resistor or LEDs
      - name: Cut traces
      - name: Minor wire bodges
      - name: No new addition to BOM, only value changes
      - name: Minor Silkscreen adjustments E.g. swapping ON and OFF labels, swapping <code>+</code> and <code>-</code> for power labels

references:
  - name: SemVer
    url: https://semver.org/
  - name: How to provide version numbers to hardware schematics / PCBs?
    url: https://electronics.stackexchange.com/questions/406524/how-to-provide-version-numbers-to-hardware-schematics-pcbs
  - name: Version Control for Open Source Hardware
    url: https://www.instructables.com/Version-Control-for-Open-Source-Hardware/
---
