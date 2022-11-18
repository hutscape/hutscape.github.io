int clockPin = 8;
int dPin = 7;
int ledPin = 13;

void setup() {
  pinMode(clockPin, OUTPUT);
  pinMode(dPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(dPin, HIGH);
  delay(1000);

  digitalWrite(clockPin, LOW);
  delay(1000);
  digitalWrite(clockPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(dPin, LOW);
  delay(1000);

  digitalWrite(clockPin, LOW);
  delay(1000);
  digitalWrite(clockPin, HIGH);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
