#include <WebUSB.h>

// Modified from example https://webusb.github.io/arduino/demos/console
WebUSB WebUSBSerial(1, "webusb.github.io/arduino/demos/console");

const int ledPin = 13;

void setup() {
  WebUSBSerial.begin(9600);
  while (!Serial) {}
  delay(100);

  SerialUSB.begin(9600);
  delay(1000);

  SerialUSB.println("Start!");
  WebUSBSerial.write("Sketch begins");
  WebUSBSerial.flush();

  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (WebUSBSerial && WebUSBSerial.available()) {
    int byte = WebUSBSerial.read();

    if (byte == 'H') {
      SerialUSB.println("LED ON");
      WebUSBSerial.write("Turning LED on.");
      digitalWrite(ledPin, HIGH);
    } else if (byte == 'L') {
      SerialUSB.println("LED OFF");
      WebUSBSerial.write("Turning LED off.");
      digitalWrite(ledPin, LOW);
    }

    WebUSBSerial.flush();
  }
}
