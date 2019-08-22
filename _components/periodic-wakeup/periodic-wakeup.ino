#include <ArduinoLowPower.h>

void setup() {
  SerialUSB.begin(9600);
  while (!SerialUSB) { }
  delay(1000);
  SerialUSB.println("Start!");

  pinMode(LED_BUILTIN, OUTPUT);

  LowPower.attachInterruptWakeup(RTC_ALARM_WAKEUP, doSomething, CHANGE);
}

void loop() {
  SerialUSB.begin(9600);
  while (!SerialUSB) { }
  delay(1000);

  SerialUSB.println("In loop!");
  blink(5);

  SerialUSB.println("Going to sleep for 2 seconds...");
  USBDevice.detach();
  LowPower.sleep(10000);  // in milliseconds
  USBDevice.attach();

  SerialUSB.println("Awake");
  blink(10);
}

void doSomething() {
  blink(20);
}

void blink(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);

    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}
