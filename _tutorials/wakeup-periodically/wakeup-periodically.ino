#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);

  while(!Serial) { }

  Serial.println("\nI'm awake !!");
  Serial.println("Doing the task...");
  Serial.println("Going into deep sleep for 10s...");

  ESP.deepSleep(10e6);
}

void loop() {
}
