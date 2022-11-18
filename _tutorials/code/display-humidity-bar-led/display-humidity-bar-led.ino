#include "Adafruit_Si7021.h"
#define EN 2 // GPIO02 on ESP-01 module, D4 on nodeMCU WeMos

int dataPin = 13; // pin D7 `GPIO13` on NodeMCU boards
int clockPin = 14; // pin D5 `GPIO14` on NodeMCU boards
int latchPin = 15; // pin D8 `GPIO15` on NodeMCU boards

Adafruit_Si7021 sensor = Adafruit_Si7021();

void setup() {
  Serial.begin(115200);

  if (!sensor.begin()) {
    Serial.println("Did not find Si7021 sensor!");
    while (true)
      ;
  }

  pinMode(EN, OUTPUT);
  digitalWrite(EN, LOW); // enable shift register

  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  Serial.print("Temperature: ");
  Serial.print(sensor.readTemperature());
  Serial.print("\tHumidity:    ");
  Serial.print(sensor.readHumidity());

  int barHumidity = sensor.readHumidity()/20 + 1;
  String sBar = "\tGraph: " + String(barHumidity) + " bars";
  Serial.println(sBar);

 display(pow(2, barHumidity) -1); // Display humidity in LEDs
}

int display(int position) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, position);
  digitalWrite(latchPin, HIGH);
  Serial.println(position);
}
