void setup() {
  Serial.begin(115200);
  Serial.println("[INFO] Wake up!");

  blinkLED();

  Serial.println("[INFO] Going to sleep for ESP.deepSleepMax()...");
  ESP.deepSleep(ESP.deepSleepMax());
}

void loop() {}

void blinkLED() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);

  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
}
