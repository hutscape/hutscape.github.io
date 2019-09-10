#include <ArduinoLowPower.h>

void setup() {
  // Serial1 is used because the USB does not work after wakeup
  Serial1.begin(9600);
  while (!Serial1) { }
  delay(1000);
  Serial1.println("Start!");
  blink(5);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blink(10);
  Serial1.println("Going to sleep for 30 minutes...");

  // 30*60 = 1800 seconds = 30 minutes
  LowPower.sleep(1800000);  // in milliseconds

  Serial1.println("Awake");
  blink(10);
}

void blink(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);

    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}
