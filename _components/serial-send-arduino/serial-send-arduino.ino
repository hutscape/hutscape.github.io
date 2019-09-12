String readString;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while (Serial.available()) {
    delay(3);
    char c = Serial.read();
    readString += c;
  }

  if (readString.length() > 0) {
    Serial.println(readString);

    if (readString == "on") {
      ledON();
    }

    if (readString == "off") {
      ledOFF();
    }

    readString = "";
  }
}

void ledON() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
}

void ledOFF() {
  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
}
