int redPin = PIN_A1;
int greenPin = PIN_A2;
int bluePin = PIN_A3;

void setup() {
  analogWrite(redPin, 0);  // RED (purple)
  analogWrite(greenPin, 255);  // GREEN (yellow)
  analogWrite(bluePin, 0);  // BLUE (cyan)
}

void loop() { }
