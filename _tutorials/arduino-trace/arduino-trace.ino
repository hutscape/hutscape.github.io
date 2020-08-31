#define ARDUINOTRACE_SERIAL SerialUSB
#include <ArduinoTrace.h>

int someValue = 42;

void setup() {
    SerialUSB.begin(9600);
    while (!SerialUSB) { }
    delay(100);
    DUMP(someValue);
}

void loop() {
    SerialUSB.print(millis());
    SerialUSB.print(": ");
    TRACE();

    blink(5);
    delay(2000);
}

void blink(int num) {
    SerialUSB.print(millis());
    SerialUSB.print(": ");
    TRACE();

    SerialUSB.print(millis());
    SerialUSB.print(": ");
    DUMP(num);

    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);

    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}
