#include <ESP8266WiFi.h>
#define USERBUTTON 12 // GPIO012 on ESP or D6 on WeMos

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(2000);
  int userButtonValue = digitalRead(USERBUTTON);

  while(!Serial) { }

  Serial.println("Wake up!");
  
  Serial.print("User button value: ");
  Serial.println(userButtonValue);

  if (userButtonValue == 0) {
    Serial.print("User long pressed button: ");
  }

  Serial.println("Do task");
  Serial.println("Going into deep sleep for 10s, unless button pressed...");
  ESP.deepSleep(10e6);
}

void loop() {
}
