#include <IRLibRecvPCI.h>

IRrecvPCI myReceiver(5);  // Arduino ZERO pin 5

void setup() {
  SerialUSB.begin(9600);

  myReceiver.enableIRIn();
  SerialUSB.println("Ready to receive IR signals");
  SerialUSB.println("Point the remote controller to the IR receiver and press!");
}

void loop() {
  if (myReceiver.getResults()) {
    // SerialUSB.println("\n\n-------------------------");
    SerialUSB.println("\nReceived IR signal:");

    SerialUSB.print(F("#define RAW_DATA_LEN "));
    SerialUSB.println(recvGlobal.recvLength, DEC);

    // SerialUSB.print(F("uint16_t rawData[RAW_DATA_LEN]={\n"));
    // for (bufIndex_t i = 1; i < recvGlobal.recvLength; i++) {
    //   SerialUSB.print(recvGlobal.recvBuffer[i], DEC);
    //   SerialUSB.print(F(", "));
    //   if ((i % 8) == 0) {
    //     SerialUSB.print(F("\n"));
    //   }
    // }
    // SerialUSB.println(F("1000};"));
    // SerialUSB.println("-------------------------");

    myReceiver.enableIRIn();
  }
}
