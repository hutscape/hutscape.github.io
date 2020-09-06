#include "src/foo/foo.h"

void setup() {
    SerialUSB.begin(9600);
    while (!SerialUSB) { }

    SerialUSB.println("Start!");
}
void loop() {
    bar();
    delay(2000);
}
