#define LED 13

void setup() {
  pinMode(LED, OUTPUT);

  SerialUSB.begin(9600);
  while (!SerialUSB) {}
  delay(100);

  SerialUSB.println("Start!");
}

void loop() {
  SerialUSB.println("HIGH");
  digitalWrite(LED, HIGH);
  delay(500);

  SerialUSB.println("LOW");
  digitalWrite(LED, LOW);
  delay(500);
}