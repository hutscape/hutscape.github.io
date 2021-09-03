---
layout: tutorials
title: Convert millis() to readable time
dev_board: LilyGO T-Beam
components:
  - name: TTGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
features:
  - millis
  - time
  - hours
  - seconds
  - minutes
  - days
firmware:
  - arduino
images:
  console: millis-hour-min-sec-console.png
references:
  - name: Sketch to Convert Milliseconds to Hours, Minutes and Seconds - HH:MM:SS
    url: https://forum.arduino.cc/index.php?topic=664362.0
  - name: millis() Arduino Time reference
    url: https://www.arduino.cc/reference/en/language/functions/time/millis/
---

This example contains a simple sketch to convert `millis()` to readable time format in days, hours, minutes and seconds. And then it prints out the time lapsed after the last print of the time.
