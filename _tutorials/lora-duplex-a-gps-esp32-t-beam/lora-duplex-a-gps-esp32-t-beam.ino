#include "src/gps/gps.h"
#include "src/oled/oled.h"
#include "src/lorap2p/lorap2p.h"

#define GPS_ACCURACY 7

byte localAddress = 0xAA;
byte destinationAddress = 0xBB;

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
    // TODO: Takes note of the millis() when other node lat-long is received
    printStatus("Received", &destinationLatlong, destinationAddress, localAddress);
  }

  if (millis() - lastSendTime > interval && hasNewGPS) {
    if (isGPSValid(&localLatlong)) {
      String latlongData = String(localLatlong.latitude, GPS_ACCURACY) + "," + String(localLatlong.longitude, GPS_ACCURACY);
      sendLora(latlongData, localAddress, destinationAddress);

      haversine_distance = distance(localLatlong.latitude, localLatlong.longitude, destinationLatlong.latitude, destinationLatlong.longitude);

      Serial.print("Distance between 2 nodes: ");
      Serial.print(haversine_distance);
      Serial.println("m");

      // TODO: display how long ago the other node distance was received instead of just millis()
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
  Serial.print(ll->latitude, GPS_ACCURACY);
  Serial.print(",");
  Serial.print(ll->longitude, GPS_ACCURACY);
  Serial.print(" from 0x" + String(addressA, HEX));
  Serial.println(" to 0x" + String(addressB, HEX));
}

bool isGPSValid(LatLong *localLatlong) {
  if (localLatlong->latitude == 0.000 || localLatlong->longitude == 0.000) {
    return false;
  }

  return true;
}
