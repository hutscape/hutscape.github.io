void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(115200);
  Serial.println("Hello!");
}

void loop() {
  ledON();
  delay(4000);

  ledOFF();
  delay(1000);
}

void ledON() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
}

void ledOFF() {
  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
}
