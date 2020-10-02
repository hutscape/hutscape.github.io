#define VBATPIN 6

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  SerialUSB.begin(9600);
  while (!SerialUSB) {}
  delay(1000);

  SerialUSB.println("Start battery voltage measurement!");
}

void loop() {
  // SerialUSB.println("HIGH");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);

  // SerialUSB.println("LOW");
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);

  float measuredvbat = analogRead(VBATPIN);

  for (int i = 0; i < 10; i++) {
    measuredvbat += analogRead(VBATPIN);
    delay(10);
  }

  measuredvbat /= 10;
  measuredvbat *= 2;
  measuredvbat *= 4.5;  // Or the reference voltage E.g. 2.8V, 3.3V
  measuredvbat /= 1024;

  SerialUSB.print("VBat: ");
  SerialUSB.print(measuredvbat);
  SerialUSB.println("V");
}
