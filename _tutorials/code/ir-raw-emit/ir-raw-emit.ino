#include <IRLibSendBase.h>
#include <IRLib_HashRaw.h>
#include "./data.h"

IRsendRaw mySender;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(5000);
  Serial.println("Sending ON");
  mySender.send(rawDataON, RAW_DATA_LEN, 38);
  Serial.println("Sent Turn ON Aircon");

  delay(5000);
  Serial.println("Sending OFF");
  mySender.send(rawDataOFF, RAW_DATA_LEN, 38);
  Serial.println("Sent Turn OFF Aircon");
}
