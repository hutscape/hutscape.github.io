#include "Arduino.h"

struct LatLong {
  double latitude;
  double longitude;
};

void initGPS();
bool isGPSAvailable();
bool isGPSsameAsLastKnown(struct LatLong *, struct LatLong *);
bool doesBothPeerHaveGPSAtSimilarTime(long, long);
bool isGPSValid(struct LatLong *);
void getLatLong(struct LatLong *);
double distance(double lat1, double lng1, double lat2, double lng2);
