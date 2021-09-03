---
layout: tutorials
title: Arduino struct with functions in seperate folder
dev_board: LilyGO T-Beam
components:
  - name: TTGO T-Beam
    url: https://s.click.aliexpress.com/e/_9ggvh6
features:
  - struct
  - function
  - files
  - header
  - cpp
  - pointer
firmware:
  - Arduino
images:
  console: struct-functions-console.png
prerequisites:
  - name: Adding header and cpp files to Arduino folder
    url: ./more-files
---

Use struct data type to declare, create and use it in a function. The struct functions are abstracted in a seperate folder to show how it can be used and referred in the `main.ino`.

The struct `LatLong` can be declared:

```c
struct LatLong {
  double latitude;
  double longitude;
};
```

The struct can be defined:

```c
LatLong latlong = {1.2480631, 103.8285657};
```

The struct can be used in a function declaration:

```c
void goToSentosa(struct LatLong *);
```

The struct can be used in a function definition:

```c
void goToSentosa(struct LatLong *ll) {
  ...
}
```
