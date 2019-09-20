#include "Adafruit_Si7021.h"

Adafruit_Si7021 sensor = Adafruit_Si7021();

void setup() {
  Serial.begin(9600);

  if (!sensor.begin()) {
    Serial.println("Did not find Si7021 sensor!");
    while (true) {}
  }

  delay(1000);
}

void loop() {
  Serial.println(sensor.readTemperature());
  delay(2000);
}
