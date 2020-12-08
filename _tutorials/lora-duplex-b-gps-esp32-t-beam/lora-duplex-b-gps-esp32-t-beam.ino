#include "src/gps/gps.h"
#include "src/oled/oled.h"
#include "src/lorap2p/lorap2p.h"

byte localAddress = 0xBB;
byte destinationAddress = 0xAA;

bool hasNewGPS = false;

long lastSendTime = 0;
int interval = 2000;
long haversine_distance = 0.0;

LatLong localLatlong = {0.0, 0.0};
LatLong destinationLatlong = {0.0, 0.0};

void setup() {
  Serial.begin(9600);
  Serial.println("Start LoRa GPS duplex");

  initGPS();
  initOLED();
  initLora();

  displayInitOLED();
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
    if (isGPSValid(&localLatlong)) {
      String latlongData = String(localLatlong.latitude, 6) + "," + String(localLatlong.longitude, 6);
      sendLora(latlongData, localAddress, destinationAddress);

      haversine_distance = distance(localLatlong.latitude, localLatlong.longitude, destinationLatlong.latitude, destinationLatlong.longitude);

      Serial.print("Distance between 2 nodes: ");
      Serial.print(haversine_distance, 3);
      Serial.println("m");

      displayOLED(localLatlong.latitude, localLatlong.longitude, haversine_distance);
      printStatus("Sent", &localLatlong, localAddress, destinationAddress);

      lastSendTime = millis();
      interval = random(2000) + 1000;
      hasNewGPS = false;
    }
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

bool isGPSValid(LatLong *localLatlong) {
  if (localLatlong->latitude == 0.000 || localLatlong->longitude == 0.000) {
    return false;
  }

  return true;
}