#include "Arduino.h"

struct LatLong {
  double latitude;
  double longitude;
};

void initGPS();
bool isGPSAvailable();
void getLatLong(struct LatLong *);
double distance(double lat1, double lng1, double lat2, double lng2);