#include <Adafruit_GPS.h>

Adafruit_GPS GPS(&Wire);

void setup() {
  while (!Serial) {}
  Serial.begin(115200);
  Serial.println("Adafruit GPS library basic I2C test!");
  GPS.begin(0x10);  // The I2C address to use is 0x10
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    GPS.write(c);
  }
  if (GPS.available()) {
    char c = GPS.read();
    Serial.write(c);
  }
}
