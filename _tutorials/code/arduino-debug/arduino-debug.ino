#define DEBUG  // Comment to turn off debug statements
#include "DebugUtils.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  #ifdef DEBUG
  SerialUSB.begin(9600);
  while (!SerialUSB) { }
  delay(100);
  #endif

  DEBUG_PRINT("Start blinking");
}

void loop() {
  DEBUG_PRINT("HIGH");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);

  DEBUG_PRINT("LOW");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
