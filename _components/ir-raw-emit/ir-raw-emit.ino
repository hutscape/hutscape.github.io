#include <IRLibSendBase.h>
#include <IRLib_HashRaw.h>
#include "./data.h"

IRsendRaw mySender;

void setup() {
  Serial.begin(9600);
  Serial.println("Press 0 or 1 to Turn ON / OFF the Aircon");
}

void loop() {
  char input = Serial.read();

  if (Serial.read() == '1') {
    mySender.send(rawDataON, RAW_DATA_LEN, 36);
    Serial.println("Sent Turn ON Aircon");
  } else if (Serial.read() == '0') {
    mySender.send(rawDataOFF, RAW_DATA_LEN, 36);
    Serial.println("Sent Turn OFF Aircon");
  }
}
