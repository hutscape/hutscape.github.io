---
layout: checklists
title: 🏭 PCB Manufacturing
description: Check with PCB manufacturer's capabilities and specifications
checks:
  - title: ⏹ Constraints
    subtitle: Checks for a simple prototype PCB
    list:
      - name: <strong>2 Layer board</strong>, not multi-layered board
      - name: <strong>Digital signals</strong>, not analog signals
      - name: <strong>Low voltage of 3.3V / 5V</strong>, not high voltage
      - name: <strong>Direct Current</strong>, not Alternating Current
      - name: <strong>Low speed signals</strong>, not high speed signals (50MHz to 3GHz)
      - name: <strong>5 or lesser number of boards</strong>, not above 100
      - name: PCB not used in industrial, aerospace, millitary, medical and any other restricted industry

  - title: 📝 Capabilities
    subtitle: Check with the online PCB manufacturer's capabilities page. Approximate safe numbers are in brackets, but always better to check the capabilities page again!
    list:
      - name: Maximum and minimum dimension of a PCB
      - name: Number of layers (2)
      - name: Material (FR-4)
      - name: Board thickness (1.6mm)
      - name: Minimum trace
      - name: Minimum spacing
      - name: Minimum drill size
      - name: Maximum drill size
      - name: Minimum width of annular ring
      - name: Minimum character / text height

  - title: 📄 Specifications
    subtitle: Online order page options. Most common options for affordability are in brackets, but always check with the ordering page!
    list:
      - name: Dimensions
      - name: Number of layers
      - name: PCB thickness
      - name: Copper weight (1oz)
      - name: PCB Color (green)
      - name: Silkscreen color (white)
      - name: Surface finish (HASL lead-free)

references:
  - name: PCBWay order online specifications
    url: https://www.pcbway.com/QuickOrderOnline.aspx
  - name: PCBWay Capabilities
    url: https://www.pcbway.com/capabilities.html
---
