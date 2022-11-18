void setup() {
  delay(500);
  Serial.begin(115200);
  delay(500);
  Serial.println("\n\n================================");
  Serial.print("Chip Model: ");
  Serial.println(ESP.getChipModel());
  Serial.print("Chip version: ");
  Serial.println(ESP.getChipRevision());
  Serial.print("Numer of cores: ");
  Serial.println(ESP.getChipCores());
  Serial.print("Flash Chip Size: ");
  Serial.println(ESP.getFlashChipSize());
  Serial.print("Flash Chip Speed: ");
  Serial.println(ESP.getFlashChipSpeed());

  Serial.println("================================");
}

void loop() { }
