#include <IRLibSendBase.h>
#include <IRLib_HashRaw.h>
#include "./data.h"

IRsendRaw mySender;
#define IR_EMIT_PIN 9

void setup() {
  SerialUSB.begin(9600);
}

void loop() {
  delay(5000);
  SerialUSB.println("Sending ON");
  mySender.send(rawDataON, RAW_DATA_LEN, 38);
  SerialUSB.println("Sent Turn ON Aircon");

  delay(5000);
  SerialUSB.println("Sending OFF");
  mySender.send(rawDataOFF, RAW_DATA_LEN, 38);
  SerialUSB.println("Sent Turn OFF Aircon");
}
