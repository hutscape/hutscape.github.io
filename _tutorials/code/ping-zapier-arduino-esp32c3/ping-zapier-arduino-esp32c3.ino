#include <WiFiClientSecure.h>
#include "Secret.h"
#define LED 3  // or LED_BUILTIN for on-board LED

WiFiClientSecure client;

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  Serial.print("Attempting to connect to SSID: ");
  Serial.println(ssid);

  WiFi.useStaticBuffers(true);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Connected to WiFi");

  client.setCACert(zapier_root_ca);
  sendZapierWebhook();
  blink(5);
}

void loop() {}

void sendZapierWebhook() {
  if (!client.connect(server, 443)) {
    Serial.println("Connection failed!");
  } else {
    Serial.println("Connected to Zapier");
    String data = "data1=67&data2=testing";  // Amend the data accordingly
    String request = "POST " + url + " HTTP/1.1\r\n";
    request += "Host: " + String(host) + "\r\n";
    request += "Content-Type: application/x-www-form-urlencoded\r\n";
    request += "Content-Length: " + String(data.length()) + "\r\n\r\n";
    request += data;

    Serial.println("Sending request to Zapier:");
    Serial.println(request);

    client.print(request);

    // Wait for the response until 5 seconds
    unsigned long startTime = millis();
    while (client.connected() && millis() - startTime < 5000) {
      if (client.available()) {
        char c = client.read();
        Serial.print(c);
      }
    }

    // Close the connection
    client.stop();
    Serial.println("Request sent to Zapier");
  }
}

void blink(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED, HIGH);
    delay(1000);

    digitalWrite(LED, LOW);
    delay(1000);
    Serial.print("Blink ");
    Serial.println(i + 1);
  }
}
