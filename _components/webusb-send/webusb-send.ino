#include <WebUSB.h>

// Modified from example https://webusb.github.io/arduino/demos/console
WebUSB WebUSBSerial(1, "webusb.github.io/arduino/demos/console");

void setup() {
  WebUSBSerial.begin(9600);
  while (!WebUSBSerial) {}
  delay(100);
}

void loop() {
  WebUSBSerial.write("Hello world to the browser!");
  WebUSBSerial.flush();

  delay(2000);
}
