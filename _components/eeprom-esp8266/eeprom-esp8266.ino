#include <EEPROM.h>

// Change the STORED_WORD is another string
String STORED_WORD = "cactus_2";
String answer = "";

void setup() {
  EEPROM.begin(512);
  Serial.begin(115200);

  Serial.println("Store word " + STORED_WORD + " in EEPROM");
  writeWord(STORED_WORD);
}

void loop() {
  Serial.print("Read word from EEPROM: ");
  answer = readWord();
  Serial.println(answer);

  Serial.print("Word length: ");
  Serial.println(answer.length());

  delay(2000);
}

void writeWord(String word) {
  delay(10);

  for (int i = 0; i < word.length(); ++i) {
    Serial.println(word[i]);
    EEPROM.write(i, word[i]);
  }

  EEPROM.write(word.length(), '\0');
  EEPROM.commit();
}

String readWord() {
  String word;
  char readChar;
  int i = 0;

  while (readChar != '\0') {
    readChar = char(EEPROM.read(i));
    delay(10);
    i++;

    if (readChar != '\0') {
      word += readChar;
    }
  }

  return word;
}
