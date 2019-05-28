int redPin = PIN_A1;
int greenPin = PIN_A2;
int bluePin = PIN_A3;

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);

  Serial.println("Begin RGB cycling!");

  analogWrite(redPin, 0);  // RED (purple)
  analogWrite(greenPin, 255);  // GREEN (yellow)
  analogWrite(bluePin, 0);  // BLUE (cyan)

  for (int rvalue = 0; rvalue < 255; rvalue+=50) {
    for (int gvalue = 0; gvalue < 255; gvalue+=50) {
      for (int bvalue = 0; bvalue < 255; bvalue+=50) {
        analogWrite(redPin, rvalue);  // RED (purple)
        analogWrite(greenPin, gvalue);  // GREEN (yellow)
        analogWrite(bluePin, bvalue);  // BLUE (cyan)

        display(rvalue, gvalue, bvalue);
        delay(1000);
      }
    }
  }
}

void loop() { }

void display(int red, int green, int blue) {
  Serial.print(red);
  Serial.print(", ");
  Serial.print(green);
  Serial.print(", ");
  Serial.println(blue);
}
