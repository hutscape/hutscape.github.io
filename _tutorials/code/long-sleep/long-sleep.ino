#include <EEPROM.h>

const int sleepTime = 1200;  // 1200 seconds = 20 minutes

#define FINAL_SLEEP_INTERVAL 6  // 6 * sleepTime = 6 hours
#define CURRENT_SLEEP_INTERVAL_ADDR 30  // Store sleep interval
#define CURRENT_SLEEP_INTERVAL EEPROM.read(CURRENT_SLEEP_INTERVAL_ADDR)

void setup() {
  EEPROM.begin(512);
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  Serial.println("[INFO] Wake up!");

  if (CURRENT_SLEEP_INTERVAL == FINAL_SLEEP_INTERVAL) {
    blink(5);
    resetSleepInterval();
    doSomething();
    goToSleep();
  } else {
    blink(5);
    increaseSleepInterval();
    goToSleep();
  }
}

void blink(int times) {
  for (int i=0; i <= times; i++) {
    digitalWrite(2, HIGH);
    delay(1000);

    digitalWrite(2, LOW);
    delay(1000);
  }
}
void loop() {}

void doSomething() {
  Serial.println("[INFO] Hey do something finally :)");
}

void goToSleep() {
  ESP.deepSleep(sleepTime * 1000000);
}

void resetSleepInterval() {
  EEPROM.write(CURRENT_SLEEP_INTERVAL_ADDR, 1);
  EEPROM.commit();
}

void increaseSleepInterval() {
  EEPROM.write(CURRENT_SLEEP_INTERVAL_ADDR, CURRENT_SLEEP_INTERVAL + 1);
  EEPROM.commit();
}
