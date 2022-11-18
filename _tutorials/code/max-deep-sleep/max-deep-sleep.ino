void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("");
  Serial.println("[INFO] Wake up!");
}

void loop() {
  blinkLED();

  Serial.println("[INFO] Going to sleep for ESP.deepSleepMax()...");
  ESP.deepSleep(ESP.deepSleepMax());
}

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
