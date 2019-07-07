#include <IRLibRecvPCI.h>

IRrecvPCI myReceiver(2);  // Arduino pin number for the receiver

void setup() {
  Serial.begin(9600);

  myReceiver.enableIRIn();
  Serial.println(F("Ready to receive IR signals"));
}

void loop() {
  if (myReceiver.getResults()) {
    Serial.println(F("Do a cut-and-paste of the following lines into the "));
    Serial.println(F("designated location in rawSend.ino"));
    Serial.print(F("\n#define RAW_DATA_LEN "));
    Serial.println(recvGlobal.recvLength, DEC);
    Serial.print(F("uint16_t rawData[RAW_DATA_LEN]={\n"));
    for (bufIndex_t i = 1; i < recvGlobal.recvLength; i++) {
      Serial.print(recvGlobal.recvBuffer[i], DEC);
      Serial.print(F(", "));
      if ((i % 8) == 0) {
        Serial.print(F("\n"));
      }
    }
    Serial.println(F("1000};"));
    myReceiver.enableIRIn();
  }
}
