#include <IRLibRecvPCI.h>

IRrecvPCI myReceiver(2);  // Arduino UNO pin 2

void setup() {
  Serial.begin(9600);

  myReceiver.enableIRIn();
  Serial.println("Ready to receive IR signals");
  Serial.println("Point the remote controller to the IR receiver and press!");
}

void loop() {
  if (myReceiver.getResults()) {
    Serial.println("\n\n-------------------------");
    Serial.println("Received IR signal:");

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
    Serial.println("-------------------------");

    myReceiver.enableIRIn();
  }
}
