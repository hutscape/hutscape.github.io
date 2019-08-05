#include <EEPROM.h>
String greeting = "hello";
int addr = 0;

void setup() {
  Serial.begin(115200);

  Serial.println("");
  Serial.println("");

  Serial.print("Word to write: ");
  Serial.println(greeting);
  Serial.print("Word length to write: ");
  Serial.println(greeting.length());

  // Write to EEPROM
  for (int index = 0; index < greeting.length(); index++) {
    EEPROM.write(addr, greeting[index]);
    delay(10);

    Serial.print("Writing ");
    Serial.print(greeting[index]);
    Serial.print(" in address ");
    Serial.println(addr);

    addr++;
  }

  EEPROM.write(addr, '\0');
  EEPROM.read(addr);

  Serial.println("");
  Serial.println("Begin reading back the array: ");
  int currentAddr = 0;
  char readChar = "";
  String readGreeting = "";

  while (readChar != '\0') {
    Serial.print("Reading ");

    readChar = EEPROM.read(currentAddr);
    delay(10);
    if (readChar != '\0') {
      readGreeting += readChar;
    }

    currentAddr++;

    Serial.print(readChar);
    Serial.print(" in address ");
    Serial.println(currentAddr);
  }

  Serial.print("Final string read from EEPROM: ");
  Serial.println(readGreeting);
}

void loop() {}
