// Switch LED between an external LED or the on-board LED
// #define LED LED_BUILTIN
#define LED 3

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  Serial.begin(115200);
  Serial.println("Start blinky");
}

void loop() {
  ledON();
  delay(200);

  ledOFF();
  delay(200);
}

void ledON() {
  Serial.println("LED ON");
  digitalWrite(LED, LOW);
}

void ledOFF() {
  Serial.println("LED OFF");
  digitalWrite(LED, HIGH);
}
