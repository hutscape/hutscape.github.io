#include <ArduinoLowPower.h>
#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  // Serial1 UART is used because the USB does not work after wakeup
  Serial1.begin(9600);
  // while (!Serial1) {}
  delay(1000);

  Serial1.println("Start of program");
  Serial1.println("Fast blink 10 times");
  blink(10, 200);
}

void loop() {
  Serial1.println("Slow blink 10 times");
  blink(10, 1000);

  Serial1.println("Going to sleep for 10 seconds...");
  LowPower.sleep(10000);  // in milliseconds

  Serial1.println("\n\nAwake");

  Serial1.println("Blink 5 times");
  blink(5, 1000);
}

void blink(int times, int duration) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED, LOW);
    delay(duration);

    digitalWrite(LED, HIGH);
    delay(duration);
  }
}
