#include <Arduino_HTS221.h>
#include <Arduino_LSM9DS1.h>

void setup() {
  Serial.begin(9600);
  while (!Serial) {}

  if (!initSensor()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
  }

  if (!initIMU()) {
    Serial.println("Failed to initialize IMU!");
  }

  Serial.println("Let's start!");
}

void loop() {
  float temperature;
  float humidity;
  getSensorValues(&temperature, &humidity);

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println();

  delay(1000);

  float x, y, z;
  if (getAcceleration(&x, &y, &z)) {
    Serial.print("X: ");
    Serial.print(x);
    Serial.print('\t');

    Serial.print("Y: ");
    Serial.print(y);
    Serial.print('\t');

    Serial.print("Z: ");
    Serial.println(z);
  }
}
