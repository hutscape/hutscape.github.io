void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  SerialUSB.begin(9600);
  // Blinky will not start unless serial prints are enabled
  // while (!SerialUSB) { }
  delay(100);

  SerialUSB.println("Start!");
}

void loop() {
  SerialUSB.println("HIGH");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);

  SerialUSB.println("LOW");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
