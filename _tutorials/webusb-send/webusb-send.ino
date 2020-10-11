#include <WebUSB.h>

// Modified from example https://webusb.github.io/arduino/demos/console
WebUSB WebUSBSerial(1, "webusb.github.io/arduino/demos/console");
uint16_t irCode[4] = {3446, 1716, 416, 1310};

void setup() {
  WebUSBSerial.begin(9600);
  while (!WebUSBSerial) {}
  delay(100);
}

void loop() {
  WebUSBSerial.write("Hello world to the browser!");
  WebUSBSerial.flush();

  writeWebUSB((const uint8_t *)irCode, 8);

  delay(2000);
}

void writeWebUSB(const uint8_t *buffer, int size) {
    WebUSBSerial.write((const uint8_t *)buffer, size);
    WebUSBSerial.flush();
}
