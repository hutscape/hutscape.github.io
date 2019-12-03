void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // turn the LED ON (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
