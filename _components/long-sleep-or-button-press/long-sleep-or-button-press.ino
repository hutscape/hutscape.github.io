#include <EEPROM.h>

extern "C" {
  #include "user_interface.h"
}

const int sleepTime = 10;  // 10 seconds

#define FINAL_SLEEP_INTERVAL 6
#define CURRENT_SLEEP_INTERVAL_ADDR 30  // Store sleep interval
#define CURRENT_SLEEP_INTERVAL EEPROM.read(CURRENT_SLEEP_INTERVAL_ADDR)
#define BUTTON_PRESS 12  // GPIO12 or D6
int val = 0;

void setup() {
  val = digitalRead(BUTTON_PRESS);

  Serial.begin(115200);
  Serial.println(val);

  EEPROM.begin(512);
  pinMode(2, OUTPUT);
  Serial.println("[INFO] Wake up!");

  readPin();

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

void readPin() {
  Serial.print("[INFO] Read pin GPIO12 / D6: ");
  Serial.println(digitalRead(BUTTON_PRESS));

  Serial.print("[INFO] Reset reason: ");
  Serial.println(getResetReason());
}

void blink(int times) {
  Serial.print("[INFO] Blink for ");
  Serial.print(times);
  Serial.println(" times");

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
  Serial.println("[INFO] Going to sleep for 10 seconds...");
  ESP.deepSleep(sleepTime * 1000000);
}

void resetSleepInterval() {
  Serial.println("[INFO] ");
  EEPROM.write(CURRENT_SLEEP_INTERVAL_ADDR, 0);
  EEPROM.commit();
}

void increaseSleepInterval() {
  Serial.print("[INFO] Current sleep interval: ");
  Serial.println(CURRENT_SLEEP_INTERVAL);

  EEPROM.write(CURRENT_SLEEP_INTERVAL_ADDR, CURRENT_SLEEP_INTERVAL + 1);
  EEPROM.commit();
}

int getResetReason() {
  rst_info* ri = system_get_rst_info();
  if (ri == NULL) {
    return -1;
  }

  return ri->reason;
}
