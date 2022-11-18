#include <avr/sleep.h>
#define interruptPin 2  // To wake up, press button to connect PIN 2 to GND

void setup() {
  Serial.begin(115200);
  Serial.println("");
  Serial.println("");
  Serial.println("Start");

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
}

void loop() {
  doTask();
}

void goToSleep() {
  sleep_enable();
  attachInterrupt(0, wakeUp, LOW);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  sleep_cpu();

  // Program will start from here on after wake up
  Serial.println("Do task after wakeup");
  doTask();
}

void wakeUp() {
  Serial.println("");
  Serial.println("Interrrupt fired");
  sleep_disable();
  detachInterrupt(0);
}

void doTask() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);

  Serial.println("Going to sleep");
  Serial.println("Short Pin 2 to GND to wake up!");
  goToSleep();
}
