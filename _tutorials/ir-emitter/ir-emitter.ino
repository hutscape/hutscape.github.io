#include <IRLibAll.h>

IRrecvPCI myReceiver(2);  // Arduino UNO PIN 2
IRdecode myDecoder;

IRsend mySender;

void setup() {
  Serial.begin(9600);

  myReceiver.enableIRIn();
  Serial.println("Ready to receive IR signals...");

  Serial.println("Ready to receive character into the serial monitor...");
}

void loop() {
  if (myReceiver.getResults()) {
    myDecoder.decode();
    myDecoder.dumpResults(true);
    myReceiver.enableIRIn();
  }

  // Send a character into the serial monitor
  if (Serial.read() != -1) {
    // Decoded NEC(1): Value:CE01F Adrs:0 (32 bits)
    mySender.send(NEC, 0xce01f, 32);  // Get the HEX code with IR receiver
    Serial.println("Sent Eco Blank to the projector");
  }
}
