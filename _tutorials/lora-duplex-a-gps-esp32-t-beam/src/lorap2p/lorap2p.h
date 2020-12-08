#include "Arduino.h"

void initLora();
void sendLora(String, byte, byte);
bool receiveLora(byte, double*, double*);
