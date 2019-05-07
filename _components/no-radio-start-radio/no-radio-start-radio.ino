#include <ESP8266WiFi.h>

// Edit "secret" ssid and password below
const char* ssid = "secret";
const char* password = "secret";
int count = 0;

void setup() {
  disableWiFi();

  pinMode(2, OUTPUT); // GPIO02 on ESP-12 module is linked to on-board LED
  Serial.begin(115200);
  delay(10);

  wakeupWiFiModem();
  connectToWiFi();
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    blink(5);
  }

  sleepAndWakeupWithRadioDisabled();
}

void disableWiFi() {
  WiFi.mode(WIFI_OFF);

  WiFi.forceSleepBegin();
  delay(1);

  return;
}

void wakeupWiFiModem() {
  WiFi.forceSleepWake(); // wakeup WiFi modem
  delay(1);

  WiFi.mode(WIFI_STA);

  WiFi.begin(ssid, password);

  return;
}

void connectToWiFi() {
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

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
    Serial.print("WiFi connected. IP address: ");
    Serial.println(WiFi.localIP());
  }
}

void blink(int count) {
  for(int i = 0; i < count; i++) {
    Serial.println("BLINK");
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
  }
}

void sleepAndWakeupWithRadioDisabled() {
  Serial.println("Deep sleeping for 5 seconds...");
  Serial.println("Wakeup without WiFi next time");

  WiFi.disconnect( true );
  delay(1);
  ESP.deepSleep(5000000, WAKE_RF_DISABLED); // sleep and wakeup with radio disabled
}
