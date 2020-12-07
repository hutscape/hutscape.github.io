#include "src/gps/gps.h"

int interval = 2000;
long lastSendTime = 0;
LatLong latlong = {0.0, 0.0};

void setup() {
  initGPS();

  Serial.begin(115200);
  Serial.println("Hello GPS");
}

void loop() {
  // Get GPS data as soon as it is available,
  // But display it on the serial monitor only every 2 seconds
  while (isGPSAvailable()) {
    getLatLong(&latlong);
  }

  if (millis() - lastSendTime > interval) {
    Serial.print(millis());
    Serial.print(" Lat-Long: ");
    Serial.print(latlong.latitude, 7);
    Serial.print(", ");
    Serial.println(latlong.longitude, 7);

    lastSendTime = millis();
  }
}
