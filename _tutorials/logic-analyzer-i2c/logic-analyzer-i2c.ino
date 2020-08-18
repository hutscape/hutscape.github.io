#include "Adafruit_Si7021.h"

Adafruit_Si7021 sensor = Adafruit_Si7021();

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Start Si7021");

  if (!sensor.begin()) {
    Serial.println("Did not find Si7021 sensor!");
    while (true) {}
  } else {
    Serial.println("Temperature in Celsius:");
  }
}

void loop() {
  Serial.println(sensor.readTemperature());

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
