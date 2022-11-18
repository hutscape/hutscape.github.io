void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(115200);
  Serial.println("Start blinky");
}

void loop() {
  ledON();
  delay(200);

  ledOFF();
  delay(200);
}

void ledON() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
}

void ledOFF() {
  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
}
