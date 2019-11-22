#include <SPI.h>
#include <LoRa.h>

const int csPin = 7;
const int resetPin = 6;
const int irqPin = 1;

byte localAddress = 0xAA;
byte destinationAddress = 0xBB;
long lastSendTime = 0;
int interval = 2000;
int count = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start LoRa duplex");

  LoRa.setPins(csPin, resetPin, irqPin);

  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa init failed. Check your connections.");
    while (true) {}
  }
}

void loop() {
  if (millis() - lastSendTime > interval) {
    String sensorData = String(count++);
    sendMessage(sensorData);

    Serial.print("Sending data " + sensorData);
    Serial.print(" from 0x" + String(localAddress, HEX));
    Serial.println(" to 0x" + String(destinationAddress, HEX));

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
    Serial.println("Error: Message length does not match length");
    return;
  }

  if (recipient != localAddress) {
    Serial.println("Error: Recipient address does not match local address");
    return;
  }

  Serial.print("Received data " + incoming);
  Serial.print(" from 0x" + String(sender, HEX));
  Serial.println(" to 0x" + String(recipient, HEX));
}
