---
layout: checklists
title: Layout
description: Before making the footprint layouts
checks:
  - title: Before layout
    list: [
      Check manufacturer capabilities on via size and track width,
      Round all sharp edges on the edge cuts layer
    ]
  - title: Silkscreen
    list: [
      "Adhere to <a href='/checklists/standards'>standard text size</a>",
      Add project Name,
      Add project Version,
      Add project Year,
      Add open source hardware logo,
      Add get started URL,
      Add <code>+</code> and <code>-</code> annotations to all power connectors,
      Add voltage number to all power connectors,
      Add notes beside all optional components
    ]
  - title: After layout
    list: [
      Run <code>b</code> to refill all zones on all layers in KiCad,
      Ensure ERC and DRC are passing,
      Look through the 3D view,
      Print individual layers and check them,
      "Export layers <code>F.Cu</code>, <code>B.Cu</code>, <code>F.SilkS</code>, <code>B.SilkS</code>, <code>F.Mask</code>, <code>B.Mas</code>, <code>Edge.Cuts</code> in Gerber format",
      "Export drill files <code>NPTH.drl</code>, <code>PTH.drl</code>",
      Check Gerber format layer by layer,
      Check Solder mask openings smaller than the solder pad,
      Check no text on solder pads,
    ]
references:
  - name: OSHPark manufacturing guidelines
    url: https://docs.oshpark.com/submitting-orders/drill-specs/
  - name: JLCPCB manufacturing capabilities
    url: https://jlcpcb.com/capabilities/Capabilities
---
