#include <IRLibAll.h>

IRrecvPCI myReceiver(2);
IRdecode myDecoder;

void setup() {
  Serial.begin(9600);
  delay(2000); while (!Serial);
  myReceiver.enableIRIn();
  Serial.println("Ready to receive IR signals...");
}

void loop() {
  if (myReceiver.getResults()) {
    myDecoder.decode();
    myDecoder.dumpResults(true);
    myReceiver.enableIRIn();
  }
}
