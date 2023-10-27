#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

#include "Secret.h"
// char ssid[] = "secret";
// char pass[] = "secret";

// User defined parameters
const long timeZoneOffset = 28800;  // GMT+8 (8 hours * 60 minutes * 60 seconds)
#define START_TIME 9  // 9am or 0900h
#define END_TIME 21   // 9pm or 2100h

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org");
int currentHour;

void setup() {
  // (Optional) Press reset button
  // on the dev board to see these print statements

  Serial.begin(115200);
  while (!Serial) { }

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

  timeClient.begin();
  timeClient.setTimeOffset(timeZoneOffset);
  currentHour = (timeClient.getHours() + (timeZoneOffset / 3600)) % 24;
}

void loop() {
  timeClient.update();
  Serial.println(timeClient.getFormattedTime());

  if (currentHour >= END_TIME || currentHour < START_TIME) {
    Serial.println("It's currently between 9 PM and 9 AM.");
  } else {
    Serial.println("It's currently outside the specified time range.");
  }

  delay(1000);
}
