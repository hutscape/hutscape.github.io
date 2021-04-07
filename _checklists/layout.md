---
layout: checklists
title: 🔂 Layouts
description: Making layouts
checks:
  - title: 🕹 Component placement
    list:
      - name: Ensure Bill of Materials with vendor links and datasheets are ready
      - name: Refer to the correct datasheet version number
      - name: Check manufacturer capabilities on via size and track width
      - name: Define Net Classes
      - name: Select mostly SMD components with size <code>0805</code>
      - name: Draw the edge cuts layer to contain all components with grid size <code>1.000mm</code>
      - name: Round all sharp edges on the edge cuts layer with grid size <code>25 mils</code>
      - name: Place components into functional building blocks where possible
      - name: Place connectors, LEDs, switches, buttons and antennas for mechanical considerations with grid <code>25 mils</code>
      - name:  Adjust components for less congested routing and space signal traces far apart
      - name: Add multiple LED indictors to show power on each rail and some digital functioning
      - name: Add isolation jumpers to isolate power from some circuits for  debugging
    image: net-class.png
  - title: Routing
    list:
      - name: Lay down power and ground planes first
      - name: Connect all the power and ground tracks to the planes
      - name: Layout critical tracks and route them first E.g. differential pairs
      - name: Place decoupling capacitors physically and electrically close to the desired components
      - name: Snake tracks around the board
      - name: Use standard grid size <code>10 mils</code> for routing traces
      - name: Route components, signals and power paths on layer 1 and ground return on layer 2
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
