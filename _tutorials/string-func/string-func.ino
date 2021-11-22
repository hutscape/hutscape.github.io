String sample;

void setup() {
  Serial.begin(9600);
  Serial.println("String functions");
}

void loop() {
  temperature(sample);

  Serial.print("Temperature returned: ");
  Serial.println(sample);

  delay(1000);
}

void temperature(String &value) {
  value = String(random(0, 30));
}
