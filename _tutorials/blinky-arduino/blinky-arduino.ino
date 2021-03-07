#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("HIGH");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  Serial.println("LOW");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
