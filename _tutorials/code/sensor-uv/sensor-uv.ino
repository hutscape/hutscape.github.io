#include "Adafruit_VEML6075.h"

Adafruit_VEML6075 uv = Adafruit_VEML6075();

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(115200);
  Serial.println("VEML6075 Full Test");

  if (!uv.begin()) {
    Serial.println("Failed to communicate with VEML6075 sensor, check wiring?");
  }

  Serial.println("Found VEML6075 sensor");
}

void loop() {
  Serial.println("");

  Serial.print("Raw UVA reading:  ");
  Serial.println(uv.readUVA());

  Serial.print("Raw UVB reading:  ");
  Serial.println(uv.readUVB());

  Serial.print("UV Index reading: ");
  Serial.println(uv.readUVI());

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}
