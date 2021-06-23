---
layout: checklists
title: 🔀 Layouts
description: Making complete PCB layouts
checks:
  - title: Optional footprints to include apart from the netlist
    list:
      - name: Test points
      - name: Open or bridged solder jumpers
      - name: 0Ohm resistors
      - name: LEDs for power, TX/RX, other indicators
      - name: Mounting holes

  - title: Schematic
    list:
      - name: Ensure Bill of Materials with vendor links and datasheets are ready
      - name: Ensure schematic is divided up into functional logical blocks
      - name: Refer to the correct datasheet version number
      - name: Associate mostly SMD components with size <code>0805</code> for ease of manufacturing / assembly
      - name: Ensure ERC passes
      - name: Export fresh Netlist

  - title: Grid
    list:
      - name: Set coarse grid size od <code>50 mils</code>
      - name: Import new Netlist

  - title: Net classes
    list:
      - name: Check manufacturer capabilities on via size and track width
      - name: Define Net classes for clearance,track width, via size, etc
      - name: Define Net Classes filter E.g. <code>VBAT</code>, <code>VBUS</code>, <code>3V3</code> for power
    image: net-class.png

  - title: Component placement
    list:
      - name: Group components into functional building blocks where possible with grid <code>25 mils</code>
      - name: Note components that require physical considerations at the edge E.g. connectors
      - name: Place decoupling capacitors physically and electrically close to the desired components
      - name: Make notes on the long rats nest

  - title: Physical considerations
    list:
      - name: Decide which logical blocks are on the front vs back layers
      - name: Place connectors, battery holders, LEDs, switches, buttons and antennas for mechanical considerations with grid <code>25 mils</code>
      - name: Take note of critical routes such as differential pairs

  - title: PCB Outline
    list:
      - name: Draw the edge cuts layer to contain all components with grid size <code>1.000mm</code>
      - name: Round all sharp edges on the edge cuts layer
      - name: Lock footprint for big components
      - name: Adjust components for less congested routing and space signal traces far apart
      - name: Add mounting holes as new footprints and lock them

  - title: Silkscreen
    list:
      - name: "Adhere to <a href='/checklists/standards#text-size'>standard text size</a>"
      - name: Add project name, version, month and year
      - name: Add <a href="https://github.com/KiCad/kicad-footprints/blob/master/Symbol.pretty/OSHW-Logo2_9.8x8mm_SilkScreen.kicad_mod">open source hardware logo</a> <code>9.8x8mm</code>
      - name: Add getting started URL
      - name: Add <code>+</code> and <code>-</code> annotations to all power connectors
      - name: Add voltage values to all power connectors
      - name: Add notes beside all optional components E.g. <code>DNP</code>
      - name: Add placement marks for components
      - name: Add any info on assembly, test and bringing up the board
      - name: Add any logos required and lock the footprint

  - title: Filled zones
    list:
      - name: Lay down power and ground planes first
      - name: Connect all the power and ground tracks to the planes
      - name: Route components, signals and power paths on top layer and ground return on bottom layer
      - name: Layout critical tracks and route them first E.g. uUSB differential pairs
      - name: Snake tracks around the board
      - name: Use standard grid size <code>10 mils</code> for routing traces
      - name: Clear all errors for DRC

  - title: After layout
    list:
      - name: Run <code>b</code> to refill all zones on all layers in KiCad
      - name: Ensure ERC and DRC are passing
      - name: Look through the 3D view
      - name: Print individual layers and check them
      - name: Check manufacturer's Gerber file format
      - name: "Export layers <code>F.Cu</code>, <code>B.Cu</code>, <code>F.SilkS</code> <code>B.SilkS</code>, <code>F.Mask</code>, <code>B.Mas</code>, <code>Edge.Cuts</code> in Gerber format"
      - name: "Export drill files <code>NPTH.drl</code>, <code>PTH.drl</code>"
      - name: Check Gerber format layer by layer
      - name: Check Solder mask openings smaller than the solder pad for stencils
      - name: Check no text on solder pads
      - name: Generate Drill map table and import as a graphic in the layout
      - name: Git tag the gerber compressed folder and create a release <code>git tag -a V1.0 -m "V1.0" && git push --tags</code>
      - name: Edit the release tag to <a href="https://github.com/hutscape/oak/releases/tag/V1.0">add the gerber zip folder</a>

references:
  - name: OSHPark manufacturing guidelines
    url: https://docs.oshpark.com/submitting-orders/drill-specs/
  - name: JLCPCB manufacturing capabilities
    url: https://jlcpcb.com/capabilities/Capabilities
  - name: PCBWay manufacturing capabilities
    url: https://www.pcbway.com/capabilities.html
  - name: PCB Design Tutorial
    url: https://alternatezone.com/electronics/files/PCBDesignTutorialRevA.pdf
  - name: Seven Habits of Successful 2-Layer Board Designers
    url: https://www.signalintegrityjournal.com/blogs/12-fundamentals/post/1207-seven-habits-of-successful-2-layer-board-designers#comments
  - name: Generate Gerber file from Kicad 5.1.6 for PCBWay
    url: https://www.pcbway.com/blog/help_center/Generate_Gerber_file_from_Kicad_5_1_6.html
---
