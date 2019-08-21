#include <FlashAsEEPROM.h>

void setup() {
  SerialUSB.begin(115200);
  delay(100);
}

void loop() {
  if (!EEPROM.isValid()) {
    SerialUSB.println("EEPROM is empty, writing some example data:");

    storeInFlash();
    SerialUSB.print("");
  } else {
    SerialUSB.println("EEPROM has been written.");
    SerialUSB.print("Total length of EEPROM is ");
    SerialUSB.println(EEPROM.length());
    SerialUSB.println("Here is the content of the first 20 bytes:");
    SerialUSB.print("->");

    readFromFlash();
    SerialUSB.println("");
  }

  delay(5000);
}

void storeInFlash() {
  for (int i = 0; i < 20; i++) {
    EEPROM.write(i, 100+i);
    SerialUSB.print(" ");
    SerialUSB.print(100+i);
  }

  EEPROM.commit();
}

void readFromFlash() {
  for (int i = 0; i < 20; i++) {
    SerialUSB.print(" ");
    SerialUSB.print(EEPROM.read(i));
  }

  SerialUSB.println();
}
