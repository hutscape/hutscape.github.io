// https://github.com/esp8266/Arduino/blob/master/libraries/Ticker/examples/TickerBasic/TickerBasic.ino
#include <Ticker.h>

Ticker ticker;
int count = 0;
bool isLEDToggle = false; // some kind of status

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(115200);
  Serial.println("Hello!");

  ticker.attach(1, blink); // start the ticker
  isLEDToggle = true;
}

void loop() {
  if (count > 10) { // off the LED when not require
    ticker.detach();
    ledOFF();
    isLEDToggle = false;
  }

  Serial.println(count);
  count++;
  delay(2000);
}

void blink() {
  int state = digitalRead(LED_BUILTIN);
  if(isLEDToggle){
    digitalWrite(LED_BUILTIN, !state);
  }
}

void ledOFF() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("OFF LED");
}
