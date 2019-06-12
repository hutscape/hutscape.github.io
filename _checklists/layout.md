---
layout: checklists
title: Layout
description: Footprint layouts
---

# Layout

## Before layout

- [ ] Check manufacturer capabilities on via size and track width E.g. [OSHPark](https://docs.oshpark.com/submitting-orders/drill-specs/), [JLCPCB](https://jlcpcb.com/capabilities/Capabilities)
- [ ] Round all sharp edges on the edge cuts layer

## After layout

- [ ] Run `b` to refill all zones on all layers in KiCad
- [ ] Ensure ERC and DRC are passing
- [ ] Eyeball 3D view
- [ ] Print individual layers and check them
- [ ] Export layers `F.Cu`, `B.Cu`, `F.SilkS`, `B.SilkS`, `F.Mask`, `B.Mask`, `Edge.Cuts` in Gerber format
- [ ] Export drill files `NPTH.drl`, `PTH.drl`
- [ ] Check Gerber format layer by layer
- [ ] Check Solder mask openings smaller than the solder pad
- [ ] Check no text on solder pads
