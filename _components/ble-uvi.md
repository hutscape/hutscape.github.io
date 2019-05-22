---
layout: components
title: BLE publish UV Index
hardware:
  - nRF52
  - bluefruit
  - adafruit
  - ble
  - gatt
  - uv index
  - veml6075
---

Publish a UV Index value via BLE and view it on iPhone app nRF Connect.

![](/assets/images/components/ble-uvi-schematic.png)

![](/assets/images/components/ble-uvi-console.jpg)

Use the nRF Connect iPhone app to view the UV Index values.

![](/assets/images/components/ble-uvi-nrf-connect.jpg)
![](/assets/images/components/ble-uvi-nrf-connect-services.jpg)
![](/assets/images/components/ble-uvi-nrf-connect-char.jpg)
![](/assets/images/components/ble-uvi-nrf-connect-char-read.jpg)

References:

- [Code reference](https://github.com/adafruit/Adafruit_nRF52_Arduino/blob/master/libraries/Bluefruit52Lib/examples/Peripheral/custom_htm/custom_htm.ino)
- [Bluetooth GATT service](https://www.bluetooth.com/specifications/gatt/services/)
- [Bluetooth GATT characteristics](https://www.bluetooth.com/specifications/gatt/characteristics/)
- [Download iPhone nRF connect](https://itunes.apple.com/sg/app/nrf-connect/id1054362403?mt=8)
- [nRF Toolbox iOS app source code](https://github.com/NordicSemiconductor/IOS-nRF-Toolbox)
- [BLE Assigned number for Environmental Sensing Service for UV Index characteristics](https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml)

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
