---
layout: checklists
title: Layout
description: Footprint layouts
---

# Layout

## Before layout

- [ ] Check manufacturer capabilities on via size E.g. [OSHPark](https://docs.oshpark.com/submitting-orders/drill-specs/), [JLCPCB](https://jlcpcb.com/capabilities/Capabilities)
- [ ] Check manufacturer capabilities on track width
- [ ] No sharp edge on edge cuts layer

## After layout

- [ ] Run `b` to refill all zones on all layers in KiCad
- [ ] Ensure ERC and DRC are passing
- [ ] Export layers `F.Cu`, `B.Cu`, `F.SilkS`, `B.SilkS`, `F.Mask`, `B.Mask`, `Edge.Cuts`
- [ ] Export drill files `NPTH.drl`, `PTH.drl`
- [ ] Check Gerber format layer by layer
- [ ] Eyeball 3D view
- [ ] Check copper layers
- [ ] Check paste layers
- [ ] Check solder mask layers
- [ ] Check silkscreen layers
- [ ] Check edge cut and drill layers
- [ ] Check Solder mask openings smaller than the solder pad
- [ ] Check no text on solder pads
