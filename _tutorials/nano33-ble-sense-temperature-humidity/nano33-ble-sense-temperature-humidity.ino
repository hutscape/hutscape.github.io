#include <Arduino_HTS221.h>

void setup() {
  Serial.begin(9600);
  while (!Serial) {}

  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1) {}
  }
}

void loop() {
  float temperature = HTS.readTemperature();
  float humidity = HTS.readHumidity();

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println("°C");

  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println("%");

  Serial.println();

  delay(1000);
}
