#include "DHT.h"

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
  Serial.println("Start DHT11");

  dht.begin();
}

void loop() {
  float t = dht.readTemperature();

  if (isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  Serial.println(t);
}
