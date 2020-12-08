#include "src/gps/gps.h"
#include "src/oled/oled.h"
#include "src/lorap2p/lorap2p.h"

byte localAddress = 0xBB;
byte destinationAddress = 0xAA;

bool hasNewGPS = false;

long lastSendTime = 0;
int interval = 2000;

LatLong localLatlong = {0.0, 0.0};
LatLong destinationLatlong = {0.0, 0.0};

void setup() {
  Serial.begin(9600);
  Serial.println("Start LoRa GPS duplex");

  initGPS();
  initOLED();
  initLora();
}

void loop() {
  while (isGPSAvailable()) {
    getLatLong(&localLatlong);
    hasNewGPS = true;
  }

  if (receiveLora(localAddress, &destinationLatlong.latitude, &destinationLatlong.longitude)) {
    printStatus("Received", &destinationLatlong, destinationAddress, localAddress);
  }

  if (millis() - lastSendTime > interval && hasNewGPS) {
    displayOLED(localLatlong.latitude, localLatlong.longitude);

    String latlongData = String(localLatlong.latitude, 6) + "," + String(localLatlong.longitude, 6);
    sendLora(latlongData, localAddress, destinationAddress);

    printStatus("Sent", &localLatlong, localAddress, destinationAddress);

    lastSendTime = millis();
    interval = random(2000) + 1000;
    hasNewGPS = false;
  }
}

void printStatus(String status, struct LatLong *ll, byte addressA, byte addressB) {
  Serial.print(status + " latlong ");
  Serial.print(ll->latitude, 6);
  Serial.print(",");
  Serial.print(ll->longitude, 6);
  Serial.print(" from 0x" + String(addressA, HEX));
  Serial.println(" to 0x" + String(addressB, HEX));
}

