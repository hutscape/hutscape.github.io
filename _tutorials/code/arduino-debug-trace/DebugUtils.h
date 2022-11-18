#ifdef DEBUG
  #define DEBUG_PRINT(x) \
  SerialUSB.print(millis());     \
  SerialUSB.print(": ");    \
  DUMP(x);
  #define DEBUG_TRACE() \
  SerialUSB.print(millis());     \
  SerialUSB.print(": ");    \
  TRACE();
#else
  #define DEBUG_PRINT(x)
  #define DEBUG_TRACE()
#endif

