// Setup: Edit all "secret" below for IFTTT and WiFi configurations
#include <ESP8266WiFi.h>

// Edit "secret" ssid and password below
const char* ssid = "secret";
const char* password = "secret";

// Set IFTTT Key from https://ifttt.com/services/maker_webhooks/settings
String iftttServiceName = "max_deep_sleep";
String iftttKey = "secret";
const char* host = "maker.ifttt.com";
const int httpPort = 80;

void setup() {
  Serial.begin(115200);
  Serial.println("");
  Serial.println("[INFO] Wake up!");

  pinMode(LED_BUILTIN, OUTPUT);
  connectWiFi();

  blinkLED();
  sendToIFTTT();

  // ESP.deepSleep(ESP.deepSleepMax());  // Wakeup every 3h 45min

  Serial.println("[INFO] Going to sleep for 3 hours...");
  // Wakeup every 10,800,000,000 µs = 10,800s = 3 hours
  ESP.deepSleep((uint64_t)10800000000);
}

void loop() {}

void blinkLED() {
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, HIGH);
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

  String url = "/trigger/max_deep_sleep/with/key/" + iftttKey;

  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" +
               "User-Agent: ESP8266\r\n" +
               "Connection: close\r\n\r\n");

  // NOTE: cpplint rule runtime/int is ignored
  // unsigned long is used instead of uint32 or uint64 because of millis()
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
