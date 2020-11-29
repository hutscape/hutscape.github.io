#define LED 4

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  Serial.begin(115200);
  Serial.println("Start blinky");
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(LED, LOW);
  delay(1000);

  Serial.println("LED OFF");
  digitalWrite(LED, HIGH);
  delay(1000);
}

