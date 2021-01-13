#include "Sensor.h"

bool initSensor() {
  return HTS.begin();
}

void getSensorValues(float& temperature, float& humidity) {
  temperature = HTS.readTemperature();
  humidity = HTS.readHumidity();
}

