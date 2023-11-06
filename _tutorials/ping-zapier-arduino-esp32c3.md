---
date_updated: 2023-11-06
layout: tutorials
title: Ping Zapier with Arduino on ESP32-C3
dependancies:
  - name: ESP32 Arduino
    url: https://github.com/espressif/arduino-esp32
chips:
  - ESP32-C3-MINI-1-N4
dev_board: ESP32-C3-DevKitM-1
components:
  - name: ESP32-C3-DevKitM-1
    url: https://www.aliexpress.com/item/1005003989099547.html
images:
  prototype: blinky-gpio3-esp32c3-prototype.jpg
  schematic: blinky-gpio3-esp32c3-schematic.png
  console: ping-zapier-arduino-esp32c3-console.png
references:
  - name: Schematic of ESP32-C3-DevKitM-1
    url: https://dl.espressif.com/dl/schematics/SCH_ESP32-C3-DEVKITM-1_V1_20200915A.pdf
  - name: Pinouts
    url: https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/hw-reference/esp32c3/user-guide-devkitm-1.html#pin-layout
  - name: Arduino Pins
    url: https://github.com/espressif/arduino-esp32/blob/master/variants/esp32c3/pins_arduino.h
  - name: WiFi ESP32 secure client example
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/WiFiClientSecure/examples/WiFiClientSecure/WiFiClientSecure.ino
  - name: WiFi Secure Client ESP32 readme
    url: https://github.com/espressif/arduino-esp32/blob/master/libraries/WiFiClientSecure/README.md
  - name: ESP32 HTTPS Requests (Arduino IDE)
    url: https://randomnerdtutorials.com/esp32-https-requests
  - name: Insert the time your Zap runs into a field
    url: https://help.zapier.com/hc/en-us/articles/8496275717261-Insert-the-time-your-Zap-runs-into-a-field
features:
  - esp32c3
  - ping
  - webhook
  - send
  - zapier
  - https
  - tls
  - secure
  - post
prerequisites:
  - name: Blinky with Arduino on ESP32-C3
    url: ./blinky-arduino-esp32c3
---

This example shows to do to an HTTPS POST with some data to Zapier webhook, which will then create a new row in Google Sheets.

## Create a Zap in Zapier

1. Create a new Google Spreadsheet to connect to Zapier
1. Create step 1 to Catch Hook in Webhooks by Zapier
    [![]({{ site.url }}/assets/images/tutorials/catch-webhook-zapier.png)]({{ site.url }}/assets/images/tutorials/catch-webhook-zapier.png)
1. Note the Zapier webhook URL
1. Create step 2 to Create Spreadsheet row in Google Sheets with data fields such as Timestamp with `zap_meta_human_now`
    [![]({{ site.url }}/assets/images/tutorials/create-spreadsheet-row.png)]({{ site.url }}/assets/images/tutorials/create-spreadsheet-row.png)
1. Test with `curl` HTTPS POST command

    ```sh
    $ curl -X POST -d "data1=67&data2=testing" "https://hooks.zapier.com/hooks/catch/[ZAPIER_URL]"
    ```

    [![]({{ site.url }}/assets/images/tutorials/curl-success.png)]({{ site.url }}/assets/images/tutorials/curl-success.png)
1. Check that the Google Spreadsheet has a new row with the data posted
    [![]({{ site.url }}/assets/images/tutorials/google-sheets.png)]({{ site.url }}/assets/images/tutorials/google-sheets.png)

## Download Zapier's certificate with Google Chrome Browser

1. Click the padlock 🔒 symbol beside the URL
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-1.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-1.png)
1. Click certificate is valid
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-2.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-2.png)
1. Click the details of the certificate
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-3.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-3.png)
1. Click the root certificate and export
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-4.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-4.png)
1. Download the certificate
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-5.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-5.png)
1. Open the certificate in a text editor
    [![]({{ site.url }}/assets/images/tutorials/zapier-cert-6.png)]({{ site.url }}/assets/images/tutorials/zapier-cert-6.png)
1. Add `"` at the start of every line and `\n" \` at the end of every line. Last line is `\n"`. Create a `const char` variable and add to the file `Secret.h`.

    ```sh
    const char* zapier_root_ca= \
    "-----BEGIN CERTIFICATE-----\n" \
    "MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n" \
    "ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n" \
    "b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n" \
    "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n" \
    "b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n" \
    "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n" \
    "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n" \
    "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n" \
    "VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n" \
    "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n" \
    "jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n" \
    "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n" \
    "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n" \
    "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n" \
    "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n" \
    "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n" \
    "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n" \
    "rqXRfboQnoZsG4q5WTP468SQvvG5\n" \
    "-----END CERTIFICATE-----\n";
    ```
