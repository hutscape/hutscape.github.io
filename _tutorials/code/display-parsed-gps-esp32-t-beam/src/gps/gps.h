#include "Arduino.h"

struct LatLong {
  double latitude;
  double longitude;
};

void initGPS();
bool isGPSAvailable();
void getLatLong(struct LatLong *);
