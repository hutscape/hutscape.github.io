// https://github.com/adafruit/Adafruit_Si7021/blob/master/examples/si7021/si7021.ino
#include "Adafruit_Si7021.h"

Adafruit_Si7021 sensor = Adafruit_Si7021();

void setup() {
  Serial.begin(115200);

  if (!sensor.begin()) {
    Serial.println("Did not find Si7021 sensor!");
    while (true)
      ;
  }
}

void loop() {
  Serial.print("Humidity:    ");
  Serial.print(sensor.readHumidity(), 2);
  Serial.print("\tTemperature: ");
  Serial.println(sensor.readTemperature(), 2);
  delay(1000);
}
