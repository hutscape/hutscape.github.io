#include <ESP8266WiFi.h>
#include <WiFiClient.h>

char ssid [50] = "secret";
char password [50] = "secret";

// Get IFTTT Web Hook key
// https://ifttt.com/services/maker_webhooks/settings
String key = "secret";

const char* host = "maker.ifttt.com";
const int httpsPort = 443;

// Get fingerprint of maker.ifttt.com
// echo | openssl s_client -connect maker.ifttt.com:443 |& openssl x509 -fingerprint -noout
const char fingerprint[] PROGMEM = "AA:75:CB:41:2E:D5:F9:97:FF:5D:A0:8B:7D:AC:12:21:08:4B:00:8C";

void setup() {
  Serial.begin(115200);
  while(!Serial) { }

  WiFi.begin(ssid, password);

  int count = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    count++;

    if (count % 10 == 0) {
      Serial.println("");
    }

    if (count > 120) { // Will try to connect to the WiFI for 120 seconds
      Serial.println("[ERROR] Could not connect to WiFi. Please try again.");
      WiFi.disconnect();
      break;
    }

    if (WiFi.status() == WL_CONNECTED) {
      Serial.println("");
      Serial.print("[INFO] WiFi connected! IP address: ");
      Serial.println(WiFi.localIP());
    }
  }
}

void loop() {
  float temperature = 32.4;
  float humidity = 92.3;

  Serial.println("[INFO] Sending IFTTT notification...");
  Serial.print("[INFO] Host: ");
  Serial.println(host);
  Serial.print("[INFO] PORT: ");
  Serial.println(httpsPort);

  WiFiClientSecure client;

  Serial.printf("[INFO] Using fingerprint '%s'\n", fingerprint);
  client.setFingerprint(fingerprint);

  if (!client.connect(host, httpsPort)) {
    Serial.println("[ERROR] Connection failed");
    return;
  }

  Serial.println("[INFO] Client connected");

  String url = "/trigger/cactus_values/with/key/";
  url += key;

  char data[34];

  sprintf(data, "value1=%03d&value2=%03d&value3=%03d", (int)round(temperature), (int)round(humidity), 30);

  Serial.print("Requesting URL: ");
  Serial.println(url);
  Serial.print("[INFO] Data sent: ");
  Serial.println(data);
  Serial.print("[INFO] Data size: ");
  Serial.println(sizeof(data));

  client.println(String("POST ") + url + " HTTP/1.1");
  client.println(String("Host: ") + host);
  client.println(String("Content-Type: application/x-www-form-urlencoded"));
  client.print(String("Content-Length: "));
  client.println(sizeof(data));
  client.println();
  client.println(data);

  Serial.println("[INFO] Client posted");

  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 20000) {
      Serial.println("[ERROR] Client Timeout!");
      client.stop();
      return;
    }
  }

  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }

  client.stop();
  delay(5000);
  return;
}
