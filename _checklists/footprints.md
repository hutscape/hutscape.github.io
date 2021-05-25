---
layout: checklists
title: Footprints
description: Create component footprints from scratch
checks:
  - title: Mechanical
    list:
      - name: Refer to the correct datasheet version number
      - name: Ensure the correct unit of measurement is used

  - title: Silkscreen
    list:
      - name: Label all power pins at the minimum
      - name: Number all pins
      - name: Match chip placement on PCB with the physical package to indicate <code>o</code> or <code>◖</code> on the silkscreen
      - name: Add bounding boxes for the components
      - name: Ensure copper pads are not covered by Silkscreen

  - title: Silkscreen
    list:
      - name: "Adhere to <a href='/checklists/standards#text-size'>standard text size</a>"
      - name: Add project name, version, month and year
      - name: Add <a href="https://github.com/KiCad/kicad-footprints/blob/master/Symbol.pretty/OSHW-Logo2_9.8x8mm_SilkScreen.kicad_mod">open source hardware logo</a> <code>9.8x8mm</code>
      - name: Add getting started URL
      - name: Add <code>+</code> and <code>-</code> annotations to all power connectors
      - name: Add voltage values to all power connectors
      - name: Add notes beside all optional components
      - name: Add placement marks for components
      - name: Add any info on assembly, test and bringing up the board
  - title: After layout
    list:
      - name: Run <code>b</code> to refill all zones on all layers in KiCad
      - name: Ensure ERC and DRC are passing
      - name: Look through the 3D view
      - name: Print individual layers and check them
      - name: "Export layers <code>F.Cu</code>, <code>B.Cu</code>, <code>F.SilkS</code> <code>B.SilkS</code>, <code>F.Mask</code>, <code>B.Mas</code>, <code>Edge.Cuts</code> in Gerber format"
      - name: "Export drill files <code>NPTH.drl</code>, <code>PTH.drl</code>"
      - name: Check Gerber format layer by layer
      - name: Check Solder mask openings smaller than the solder pad
      - name: Check no text on solder pads
references:
  - name: OSHPark manufacturing guidelines
    url: https://docs.oshpark.com/submitting-orders/drill-specs/
  - name: JLCPCB manufacturing capabilities
    url: https://jlcpcb.com/capabilities/Capabilities
  - name: PCB Design Tutorial
    url: https://alternatezone.com/electronics/files/PCBDesignTutorialRevA.pdf
  - name: Seven Habits of Successful 2-Layer Board Designers
    url: https://www.signalintegrityjournal.com/blogs/12-fundamentals/post/1207-seven-habits-of-successful-2-layer-board-designers#comments
---
