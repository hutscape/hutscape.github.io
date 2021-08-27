---
layout: tutorials
title: Adding header and cpp files to Arduino folder
dev_board: Arduino Zero
features:
  - files
  - header
  - cpp
  - src
  - folder
images:
  console: more-files-console.png
references:
  - name: How do I add cpp file to an arduino project?
    url: https://stackoverflow.com/questions/55684371/how-do-i-add-cpp-file-to-an-arduino-project
  - name: How to include from subfolder of sketch folder
    url: https://forum.arduino.cc/index.php?topic=445230.0
---

This example shows how to add more files (such as `*.h` and `*.cpp`) to a current Arduino project without making it into an [Arduino library](https://www.arduino.cc/en/Hacking/libraryTutorial).

Example folder structure:

```
.
├── Makefile
├── main.ino
└── src
    └── foo
        ├── foo.cpp
        └── foo.h
```
