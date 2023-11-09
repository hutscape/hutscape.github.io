const int buttonPin = 4;
const int buzzerPin = 5;
bool buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  Serial.begin(115200);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    Serial.println("Button pressed!");
    digitalWrite(buzzerPin, HIGH);  // Buzzer sound is on
    delay(1000);
    digitalWrite(buzzerPin, LOW);  // Buzzer sound is off
    delay(1000);
  }
}
