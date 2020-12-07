#include "src/latlong/latlong.h"

LatLong latlong = {1.2480631, 103.8285657};

void setup() {
  Serial.begin(9600);
  while (!Serial) { }
  Serial.println("Locations of places around the world!");
}

void loop() {
  goToSentosa(&latlong);
  Serial.print("Sentosa: (");
  Serial.print(latlong.latitude, 6);
  Serial.print(", ");
  Serial.print(latlong.longitude, 6);
  Serial.println(")");

  goToEiffelTower(&latlong);
  Serial.print("Eiffel Tower: (");
  Serial.print(latlong.latitude, 6);
  Serial.print(", ");
  Serial.print(latlong.longitude, 6);
  Serial.println(")");

  delay(2000);
}


