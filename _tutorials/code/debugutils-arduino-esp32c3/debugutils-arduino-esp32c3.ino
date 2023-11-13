#include "Arduino_DebugUtils.h"

int i = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial) { }

  // DBG_NONE, DBG_ERROR, DBG_WARNING,
  // DBG_INFO (default), DBG_DEBUG, and DBG_VERBOSE
  Debug.setDebugLevel(DBG_NONE);  // Try out one by one
  Debug.timestampOn();
}

void loop() {
  DEBUG_ERROR("Error i = %d", i);
  DEBUG_WARNING("Warning i = %d", i);
  DEBUG_INFO("INFO i = %d", i);
  DEBUG_DEBUG("DEBUG i = %d", i);
  DEBUG_VERBOSE("Verbose i = %d", i);
  i++;
  delay(1000);
}
