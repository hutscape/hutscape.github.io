#include <SPI.h>
#include <LoRa.h>

const int csPin = 5;
const int resetPin = 6;
const int irqPin = 1; // alternate pin: D11

byte localAddress = 0xAA;
byte destinationAddress = 0xBB;
long lastSendTime = 0;
int interval = 2000;
int count = 0;

void setup() {
  SerialUSB.begin(9600);
  while (!SerialUSB) { }
  delay(100);

  SerialUSB.println("Start LoRa duplex");
  SerialUSB.print("Local address:");
  SerialUSB.println(String(localAddress, HEX));
  SerialUSB.print("Destination address:");
  SerialUSB.println(String(destinationAddress, HEX));

  LoRa.setPins(csPin, resetPin, irqPin);

  if (!LoRa.begin(433E6)) {
    SerialUSB.println("LoRa init failed. Check your connections.");
    while (true) {}
  }
}

void loop() {
  if (millis() - lastSendTime > interval) {
    String sensorData = String(count++);
    sendMessage(sensorData);

    SerialUSB.print("Sending data " + sensorData);
    SerialUSB.print(" from 0x" + String(localAddress, HEX));
    SerialUSB.println(" to 0x" + String(destinationAddress, HEX));

    lastSendTime = millis();
    interval = random(2000) + 1000;
  }

  receiveMessage(LoRa.parsePacket());
}

void sendMessage(String outgoing) {
  LoRa.beginPacket();
  LoRa.write(destinationAddress);
  LoRa.write(localAddress);
  LoRa.write(outgoing.length());
  LoRa.print(outgoing);
  LoRa.endPacket();
}

void receiveMessage(int packetSize) {
  if (packetSize == 0) return;

  int recipient = LoRa.read();
  byte sender = LoRa.read();
  byte incomingLength = LoRa.read();

  String incoming = "";

  while (LoRa.available()) {
    incoming += (char)LoRa.read();
  }

  if (incomingLength != incoming.length()) {
    SerialUSB.println("Error: Message length does not match length");
    return;
  }

  if (recipient != localAddress) {
    SerialUSB.println("Error: Recipient address does not match local address");
    return;
  }

  SerialUSB.print("Received data " + incoming);
  SerialUSB.print(" from 0x" + String(sender, HEX));
  SerialUSB.println(" to 0x" + String(recipient, HEX));
}
