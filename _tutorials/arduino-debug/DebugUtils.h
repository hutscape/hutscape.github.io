#ifdef DEBUG
  #define DEBUG_PRINT(x) SerialUSB.println(x)
#else
  #define DEBUG_PRINT(x)
#endif