#include <SPI.h>
#include <LoRa.h>

#define RADIO_CS_PIN 18
#define RADIO_DI0_PIN 26
#define RADIO_RST_PIN 23

void initLora() {
  LoRa.setPins(RADIO_CS_PIN, RADIO_RST_PIN, RADIO_DI0_PIN);

  if (!LoRa.begin(433E6)) {
    Serial.println("LoRa init failed. Check your connections.");
    while (true) { }
  }
}

void sendLora(String outgoing, byte localAddress, byte destinationAddress) {
  LoRa.beginPacket();
  LoRa.write(destinationAddress);
  LoRa.write(localAddress);
  LoRa.write(outgoing.length());
  LoRa.print(outgoing);
  LoRa.endPacket();
}

bool receiveLora(byte localAddress, double* a, double* b) {
  int commaIndex;
  String incoming = "";

  if (LoRa.parsePacket() == 0) {
    return false;
  }

  int recipient = LoRa.read();
  byte sender = LoRa.read();
  byte incomingLength = LoRa.read();

  while (LoRa.available()) {
    incoming += (char)LoRa.read();
  }

  if (incomingLength != incoming.length()) {
    Serial.println("Error: Message length does not match length");
    return false;
  }

  if (recipient != localAddress) {
    Serial.println("Error: Recipient address does not match local address");
    return false;
  }

  commaIndex = incoming.indexOf(',');
  String latitude = incoming.substring(0, commaIndex);
  String longitude = incoming.substring(commaIndex + 1);
  *a = latitude.toDouble();
  *b = longitude.toDouble();

  return true;
}
