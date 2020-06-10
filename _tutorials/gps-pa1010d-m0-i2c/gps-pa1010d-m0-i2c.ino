#include <Adafruit_GPS.h>

Adafruit_GPS GPS(&Wire);

void setup() {
  while (!Serial) {}
  SerialUSB.begin(115200);
  SerialUSB.println("Hello GPS test with I2C!");
  GPS.begin(0x10);  // The I2C address to use is 0x10
}

void loop() {
  if (SerialUSB.available()) {
    char c = SerialUSB.read();
    GPS.write(c);
  }
  if (GPS.available()) {
    char c = GPS.read();
    SerialUSB.write(c);
  }
}
