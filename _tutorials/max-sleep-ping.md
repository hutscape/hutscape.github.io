---
layout: tutorials
title: Wakeup periodically after maximum sleep to ping the cloud

dependancies:
  - name: ESP8266 Arduino
    url: https://github.com/esp8266/Arduino
  - name: ESP8266 WiFi
    url: https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi
components:
  - name: WeMos D1 Mini
    url: https://amzn.to/2WKRWe6
dev_board: WeMos D1 Mini
chips:
  - ESP8266
features:
  - sleep
  - wakeup
  - cloud
  - ifttt
references:
  - name: Max deep sleep for ESP8266
    url: https://thingpulse.com/max-deep-sleep-for-esp8266
  - name: ESP8266 Non-OS SDK API Reference page 20/164
    url: https://www.espressif.com/sites/default/files/documentation/2c-esp8266_non_os_sdk_api_reference_en.pdf
  - name: Implementation of ESP.deepSleepMax()
    url: https://github.com/esp8266/Arduino/blob/master/cores/esp8266/Esp.cpp#L128
  - name: Arduino millis() API
    url: https://www.arduino.cc/reference/en/language/functions/time/millis/
prerequisites:
  - name: Max deep sleep
    url: ./max-deep-sleep
  - name: GET request to IFTTT
    url: ./ifttt-get
---

After sleeping for a maximum period `ESP.deepSleep(ESP.deepSleepMax())`, the ESP8266 wakes up to send a ping to IFTTT cloud. `ESP.deepSleepMax()` returns `(uint64_t)system_rtc_clock_cali_proc()*(0x80000000-1)/(0x1000)`.

```
system_rtc_clock_cali_proc
```

| Function | Get RTC clock period |
| ------ | ------ |
| Prototype | `uint32	system_get_rtc_time(void)`
| Parameter | none
| Return | RTC clock period (in us); `bit11` ~ `bit0` are decimal.
| Example | `os_printf("clk	cal	:	%d	\r\n",system_rtc_clock_cali_proc()>>12);`

Note

- RTC clock period has decimal part
- RTC clock period tends to drift with changes in temperature, so RTC timer is
not very precise
