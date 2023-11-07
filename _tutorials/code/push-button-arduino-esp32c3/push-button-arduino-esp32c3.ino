const int buttonPin = 4;  // Define the pin connected to the button
bool buttonState = 0;  // Variable to store the button state

void setup() {
  // Set the button pin as input with pull-up
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    Serial.println("Button pressed!");
    delay(1000);
  }
}
