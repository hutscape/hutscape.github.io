---
layout: tutorials
title: RTC Memory

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
chips:
  - ESP8266
dev_board: WeMos D1 Mini

features:
  - RTC
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
prerequisites:
  - name: Blinky ESP8266
    url: ./blinky-esp8266
references:
  - name: How to use the RTC Memory in ESP8266 and reduce power consumption
    url: https://www.youtube.com/watch?v=r-hEOL007nw
  - name: ESP8266-RTC-Memory code by SensorsIot
    url: https://github.com/SensorsIot/ESP8266-RTC-Memory
  - name: Sample code from ESP8266 Arduino
    url: https://github.com/esp8266/Arduino/blob/master/libraries/esp8266/examples/RTCUserMemory/RTCUserMemory.ino
---

Use RTC memory, instead of EEPROM, in ESP8266 because it survives deep sleep mode to reduce power consumption even further

Write a simple number to RTC Memory, deep sleep it and then wake it up again to read the same number! Use the number of count, when to turn on the radio to process something.

Example of RTC Memory read

```c
bool	system_rtc_mem_read	(
	uint32	src_addr,
	void	*	des_addr,
	uint32	save_size
)
```

Example of  RTC Memory write

```c
bool	system_rtc_mem_write	(
	uint32	des_addr,
	void	*	src_addr,
	uint32	save_size
)
```
