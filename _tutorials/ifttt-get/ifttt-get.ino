#include <ESP8266WiFi.h>

// Edit "secret" ssid and password below
const char* ssid = "secret";
const char* password = "secret";

// Set IFTTT Key from https://ifttt.com/services/maker_webhooks/settings
String iftttKey = "secret";
const char* host = "maker.ifttt.com";
const int httpPort = 80;

void setup() {
  Serial.begin(115200);
  connectWiFi();
}

void loop() {
  sendToIFTTT();
  delay(10000);  // every 10 seconds
}

void connectWiFi() {
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.print("[INFO] WiFi connected with IP address: ");
  Serial.println(WiFi.localIP());
}

void sendToIFTTT() {
  WiFiClient client;

  if (!client.connect(host, httpPort)) {
    Serial.println("[ERROR] Connection failed");
    return;
  }

  String url = "/trigger/read_humidity/with/key/" + iftttKey;

  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "User-Agent: ESP8266\r\n" +
               "Connection: close\r\n\r\n");

  // TODO: Use int16/int64/etc, rather than the C type long  [runtime/int]
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println("[ERROR] Client Timeout!");
      return;
    }
  }

  while (client.available()) {
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }

  client.stop();
  Serial.println("");
  Serial.println("[INFO] Closing connection");
  return;
}
