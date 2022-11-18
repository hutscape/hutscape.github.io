#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(115200);
  Serial.println("Start blinky");
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
}
