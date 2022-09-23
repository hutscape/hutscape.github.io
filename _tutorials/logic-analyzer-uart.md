---
layout: tutorials
title: Analyzing UART signals
dev_board: Arduino UNO
feature:
tool: Saleae Logic Analyzer
images:
  schematic: logic-analyzer-uart-schematic.png
components:
  - name: Arduino UNO R3
    url: https://amzn.to/3xbq53W
  - name: Saleae 8-Channel Logic Analyzer
    url: https://amzn.to/39SJ8px
video: jocVpFqlpOo
references:
  - name: Saleae decoding UART
    url: https://support.saleae.com/protocol-analyzers/analyzer-user-guides/decode-uart
---

View the decoded asynchronous serial signal from the graph produced by Saleae.

Capture the signal in Saleae:

![]({{ site.url }}/assets/images/tutorials/logic-analyzer-uart-all-signals.png)

Add asynchronous serial to decode the captured signal:

![]({{ site.url }}/assets/images/tutorials/logic-analyzer-uart-decoded-signal.png)
