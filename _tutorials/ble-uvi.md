---
layout: tutorials
title: BLE publish UV Index
dependancies:
  - name: Adafruit nRF52 Arduino
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino
  - name: nRF Connect iPhone app
    url: https://apps.apple.com/sg/app/nrf-connect/id1054362403
chips:
  - VEML6075
  - nRF52
dev_board: Adafruit Feather Bluefruit
features:
  - BLE
  - GATT
sensors:
  - UV Index
components:
  - name: Adafruit Feather Bluefruit nRF52
    url: https://amzn.to/39WpHw8
images:
  console: ble-uvi-console.jpg
  schematic: ble-uvi-schematic.png
references:
  - name: Code reference
    url: https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Peripheral/custom_htm/custom_htm.ino
  - name: Bluetooth GATT service
    url: https://www.bluetooth.com/specifications/gatt/services
  - name: Bluetooth GATT characteristics
    url: https://www.bluetooth.com/specifications/gatt/characteristics
  - name: Download iPhone nRF connect
    url: https://itunes.apple.com/sg/app/nrf-connect/id1054362403?mt=8
  - name: nRF Toolbox iOS app source code
    url: https://github.com/NordicSemiconductor/IOS-nRF-Toolbox
  - name: BLE Assigned number for Environmental Sensing Service for UV Index characteristics
    url: https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml
---

Publish a UV Index value via BLE and view it on iPhone app nRF Connect.

UV Index [GATT Characteristics](https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml):

```xml
<!-- Copyright 2014 Bluetooth SIG, Inc. All rights reserved. -->
<Characteristic xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://schemas.bluetooth.org/Documents/characteristic.xsd" name="UV Index" type="org.bluetooth.characteristic.uv_index" uuid="2A76" last-modified="2014-11-20" approved="Yes">
  <Value>
    <Field name="UV Index">
      <Requirement>Mandatory</Requirement>
      <Format>uint8</Format>
      <Unit>org.bluetooth.unit.unitless</Unit>
      <DecimalExponent>0</DecimalExponent>
    </Field>
  </Value>
</Characteristic>
```

Use the nRF Connect iPhone app to view the UV Index values.

![]({{ site.url }}/assets/images/tutorials/ble-uvi-nrf-connect.jpg)
![]({{ site.url }}/assets/images/tutorials/ble-uvi-nrf-connect-services.jpg)
![]({{ site.url }}/assets/images/tutorials/ble-uvi-nrf-connect-char.jpg)
![]({{ site.url }}/assets/images/tutorials/ble-uvi-nrf-connect-char-read.jpg)
