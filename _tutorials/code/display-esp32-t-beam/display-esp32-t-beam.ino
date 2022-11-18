#include "src/oled/oled.h"

void setup() {
  Serial.begin(9600);
  initOLED();
}

void loop() {
  Serial.print("Updating display at ");
  Serial.print(millis());
  Serial.println("ms");

  displayOLED();
  delay(2000);
}
