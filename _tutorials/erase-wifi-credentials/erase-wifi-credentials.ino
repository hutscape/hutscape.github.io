#include <ESP8266WiFi.h>

String oldSsid = "";

void setup() {
  // GPIO02 on ESP-12 module is linked to on-board LED
  pinMode(2, OUTPUT);

	Serial.begin(115200);
}

void loop() {
  blinkLED();

  if (hasWiFiCredentials()) {
    storeOldSSID();
    eraseWiFiCredentials();
  } else {
    printOldNewWifi();
  }
}

void blinkLED() {
  digitalWrite(2, HIGH);
  delay(500);

  digitalWrite(2, LOW);
  delay(500);
}

bool hasWiFiCredentials() {
  if (WiFi.SSID() != "") {
    return true;
  } else {
    return false;
  }
}

void storeOldSSID() {
  oldSsid = WiFi.SSID();
  Serial.print("[INFO] WiFi SSID exists: ");
  Serial.println(oldSsid);
}

void eraseWiFiCredentials() {
  WiFi.disconnect(true);
  ESP.eraseConfig();
  Serial.println("[INFO] WiFi credentials are erased.");
}

void printOldNewWifi() {
  Serial.print("[INFO] Old WiFi SSID: ");
  Serial.println(oldSsid);

  Serial.print("[INFO] New WiFi SSID: ");
  Serial.println(WiFi.SSID());
}
