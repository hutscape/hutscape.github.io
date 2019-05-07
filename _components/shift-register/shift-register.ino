#define EN 2 // GPIO02 on ESP-01 module, D4 on nodeMCU WeMos

int dataPin = 13; // pin D7 `GPIO13` on NodeMCU boards
int clockPin = 14; // pin D5 `GPIO14` on NodeMCU boards
int latchPin = 15; // pin D8 `GPIO15` on NodeMCU boards

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  pinMode(EN, OUTPUT);
  digitalWrite(EN, LOW); // enable shift register
}

void loop() {
  for (int numberToDisplay = 0; numberToDisplay < 256; numberToDisplay++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);
    digitalWrite(latchPin, HIGH);

    Serial.begin(115200);
    Serial.println(numberToDisplay);
    delay(500);
  }
}
