#include <FlashStorage.h>

FlashStorage(my_flash_store, int);
String readString = "54";  // Change this number to store in flash

void setup() {
  SerialUSB.begin(9600);
  while (!SerialUSB) { }
  delay(100);

  int number;

  SerialUSB.print("Number read from flash before storing: ");
  number = my_flash_store.read();
  SerialUSB.println(number);

  SerialUSB.print("Number from user: ");
  SerialUSB.println(readString);

  SerialUSB.println("Number has been stored in flash!");
  my_flash_store.write(readString.toInt());

  SerialUSB.print("Number read from flash: ");
  number = my_flash_store.read();
  SerialUSB.println(number);
}

void loop() {}
