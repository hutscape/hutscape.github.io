#include "src/gps/gps.h"
#include "src/oled/oled.h"
#include "src/lorap2p/lorap2p.h"

#define GPS_ACCURACY 7
#define PERIOD 2000

byte localAddress = 0xAA;
byte peerAddress = 0xBB;

unsigned long localGPSFixMillis;

long lastSendTime = 0;
int interval = PERIOD;
long haversine_distance = 0.0;

LatLong localLatlong = {0.0, 0.0};
LatLong lastKnownLocalLatlong = {0.0, 0.0};
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
  }

  if (receiveLora(localAddress, &destinationLatlong.latitude, &destinationLatlong.longitude)) {
    // TODO: Takes note of the millis() when other node lat-long is received
    printStatus("Received", &destinationLatlong, peerAddress, localAddress);
  }

  if (millis() - lastSendTime > interval) {
    if (isGPSValid(&localLatlong)) {

      // If new GPS lat-long is received
      // Then update timestamp
      // Then send to peer LoRa node
      if (!isGPSsameAsLastKnown(&lastKnownLocalLatlong, &localLatlong)) {
        localGPSFixMillis = millis();

        String latlongData = String(localLatlong.latitude, GPS_ACCURACY) + "," + String(localLatlong.longitude, GPS_ACCURACY);
        sendLora(latlongData, localAddress, peerAddress);

        lastKnownLocalLatlong.latitude = localLatlong.latitude;
        lastKnownLocalLatlong.longitude = localLatlong.longitude;
      }

      // Always display on the OLED with relative time ago
      String localMillisStr;
      getReadableTime(localGPSFixMillis, localMillisStr);

      Serial.print("Lat-Long: ");
      Serial.print(localLatlong.latitude, 7);
      Serial.print(",");
      Serial.print(localLatlong.longitude, 7);
      Serial.print(" at ");
      Serial.print(localGPSFixMillis);
      Serial.print("ms. ");
      Serial.print(localMillisStr);
      Serial.println(" ago");

      displayOLED(localLatlong.latitude, localLatlong.longitude, localMillisStr);

      lastSendTime = millis();
      interval = random(1000) + PERIOD;
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

void getReadableTime(long millisTime, String &readableTime) {
  unsigned long seconds = (millis() - millisTime) / 1000;
  unsigned long minutes = seconds / 60;
  unsigned long hours = minutes / 60;
  unsigned long days = hours / 24;
  millisTime %= 1000;
  seconds %= 60;
  minutes %= 60;
  hours %= 24;

  if (days > 0) {
    readableTime = String(days) + " ";
  }

  if (hours > 0) {
    readableTime += String(hours) + ":";
  }

  if (minutes < 10) {
    readableTime += "0";
  }
  readableTime += String(minutes) + ":";

  if (seconds < 10) {
    readableTime += "0";
  }
  readableTime += String(seconds);
}
