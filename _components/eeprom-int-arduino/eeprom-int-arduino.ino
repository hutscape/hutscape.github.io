#include <EEPROM.h>

int values[] = {23, 254, 255, 256, 257, -1, -2};
int addr = 0;
int arraySize = sizeof(values) / sizeof(values[0]);

void setup() {
  Serial.begin(115200);

  Serial.println("");
  Serial.println("");

  // EEPROM size is 1024 bytes on the ATmega328P
  Serial.print("Arduino EEPROM length: ");
  Serial.println(EEPROM.length());

  // Each EEPROM element is 1 byte
  Serial.print("Array length to write and read: ");
  Serial.println(arraySize);

  for (int index = 0; index < arraySize; index++) {
    EEPROM.write(addr, values[index]);
    delay(10);

    Serial.print("Writing ");
    Serial.print(values[index]);
    Serial.print(" in address ");
    Serial.println(addr);

    addr++;
  }

  EEPROM.write(addr, "\0");
  EEPROM.read(addr);

  Serial.println("");
  Serial.println("Begin reading back the array: ");
  int currentAddr = 0;
  int readInt;

  while (currentAddr < arraySize) {
    Serial.print("Reading ");
    readInt = EEPROM.read(currentAddr);

    Serial.print(readInt);
    Serial.print(" in address ");
    Serial.println(currentAddr);

    currentAddr++;
  }
}

void loop() {}
