---
layout: checklists
title: Footprint Layouts
description: Before making the footprint layouts
checks:
  - title: Before routing
    list:
      - name: Check manufacturer capabilities on via size and track width
      - name: Define Net Classes
      - name: Draw the edge cuts layer to contain all components
      - name: Round all sharp edges on the edge cuts layer with grid <code>25 mils</code>
      - name: Place components for mechanical considerations with grid <code>25 mils</code>
    image: net-class.png
  - title: Silkscreen
    list:
      - name: "Adhere to <a href='/checklists/standards'>standard text size</a>"
      - name: Add project Name
      - name: Add project Version
      - name: Add project Year
      - name: Add <a href="https://github.com/KiCad/kicad-footprints/blob/master/Symbol.pretty/OSHW-Logo2_9.8x8mm_SilkScreen.kicad_mod">open source hardware logo</a> <code>9.8x8mm</code>
      - name: Add get started URL
      - name: Add <code>+</code> and <code>-</code> annotations to all power connectors,
      - name: Add voltage number to all power connectors
      - name: Add notes beside all optional components    
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
---
