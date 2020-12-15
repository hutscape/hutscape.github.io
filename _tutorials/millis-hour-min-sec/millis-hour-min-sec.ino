unsigned long currentMillis;
unsigned long seconds;
unsigned long minutes;
unsigned long hours;
unsigned long days;

void setup() {
  Serial.begin(9600);
  while (!Serial) { }
  Serial.println("Begin conversion from millis to readable time");
}

void loop() {
  currentMillis = millis();
  seconds = currentMillis / 1000;
  minutes = seconds / 60;
  hours = minutes / 60;
  days = hours / 24;
  currentMillis %= 1000;
  seconds %= 60;
  minutes %= 60;
  hours %= 24;

  if (days > 0) {
    Serial.print(days);
    Serial.print(' ');
  }

  if (hours > 0) {
    Serial.print(hours);
    Serial.print(":");
  }

  if (minutes < 10) {
    Serial.print('0');
  }
  Serial.print(minutes);
  Serial.print(":");

  if (seconds < 10) {
    Serial.print('0');
  }
  Serial.print(seconds);
  Serial.println(" ago");

  delay(5000);
}
