#include <WebUSB.h>

// Modified from example https://webusb.github.io/arduino/demos/console
WebUSB WebUSBSerial(1, "webusb.github.io/arduino/demos/console");

#define Serial WebUSBSerial

const int ledPin = 13;

void setup() {
  // Serial is from the MCU to computer to eventually the browser
  Serial.begin(9600);
  while (!Serial) {}
  delay(100);

  // SerialUSB is to display print statements in serial console of the computer
  SerialUSB.begin(9600);
  delay(1000);

  SerialUSB.println("Start!");
  Serial.write("Sketch begins");
  Serial.flush();

  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial && Serial.available()) {
    int byte = Serial.read();
    Serial.write(byte);
    if (byte == 'H') {
      SerialUSB.println("LED ON");
      Serial.write("Turning LED on.");
      digitalWrite(ledPin, HIGH);
    } else if (byte == 'L') {
      SerialUSB.println("LED OFF");
      Serial.write("Turning LED off.");
      digitalWrite(ledPin, LOW);
    }
    Serial.flush();
  }
}
