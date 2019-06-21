uint8_t battPin = 16; // Pin 16 on nRF52 Feather Adafruit
int isBattON = 0;

void setup() {
  Serial.begin(115200);
  pinMode(battPin, INPUT_PULLUP);
}

void loop() {
  // Connect pin 16 to GND or 3V3
  isBattON = digitalRead(battPin);
  Serial.print("Batt status: ");
  Serial.println(isBattON);
  delay(2000);
}
