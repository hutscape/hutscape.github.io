#include <ESP8266WiFi.h>

// Edit "secret" ssid and password below
const char* ssid = "secret";
const char* password = "secret";
int count = 0;

void setup() {
  pinMode(2, OUTPUT); // GPIO02 on ESP-12 module is linked to on-board LED

  Serial.begin(115200);
  delay(10);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    count++;
    Serial.print(".");

    if (count > 20) {
      Serial.println("WiFi connection failed");
      break;
    }
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());

    pinMode(LED_BUILTIN, OUTPUT);
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(2, HIGH);
    Serial.println(WiFi.localIP());
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
  }

  Serial.println("Deep sleeping for 5 seconds...");
  ESP.deepSleep(5000000, WAKE_RFCAL);
  // Vary the parameters to test WiFi Connectivity
  // WAKE_RF_DEFAULT: WiFi connection is successful
  // WAKE_RFCAL: WiFi connection is successful
  // WAKE_NO_RFCAL: WiFi connection is successful
  // WAKE_RF_DISABLED: WiFi connection should fail
}
