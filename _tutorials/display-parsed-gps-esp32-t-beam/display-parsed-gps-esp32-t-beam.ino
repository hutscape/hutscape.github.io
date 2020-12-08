#include "src/gps/gps.h"
#include "src/oled/oled.h"

int interval = 2000;
long lastSendTime = 0;
LatLong latlong = {0.0, 0.0};

void setup() {
  Serial.begin(9600);
  initGPS();
  initOLED();
}

void loop() {
  // Get the GPS information as soon as it is available,
  // but display the lat-long in serial monitor and OLED only every interval
  while (isGPSAvailable()) {
    getLatLong(&latlong);
  }

  if (millis() - lastSendTime > interval) {
    Serial.print(millis());
    Serial.print(" Lat-Long: ");
    Serial.print(latlong.latitude, 7);
    Serial.print(", ");
    Serial.println(latlong.longitude, 7);

    displayOLED(latlong.latitude, latlong.longitude);

    lastSendTime = millis();
  }
}
