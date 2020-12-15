#include "gps.h"
#include <HardwareSerial.h>
#include <TinyGPS++.h>
#include <math.h>

#define R 6371
#define TO_RAD (3.1415926536 / 180)

#define GPS_SERIAL_NUM 1
#define GPS_RX_PIN 34
#define GPS_TX_PIN 12

HardwareSerial GPSSerial(GPS_SERIAL_NUM);
TinyGPSPlus gps;

void initGPS() {
  GPSSerial.begin(9600, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN);
}

bool isGPSAvailable() {
  if (GPSSerial.available() > 0) {
    return true;
  }

  return false;
}

bool isGPSValid(LatLong *localLatlong) {
  if (localLatlong->latitude == 0.000 || localLatlong->longitude == 0.000) {
    return false;
  }

  return true;
}

void getLatLong(struct LatLong *ll) {
  gps.encode(GPSSerial.read());
  if (gps.location.isUpdated()){
    ll->latitude = gps.location.lat();  // double TinyGPSLocation::lat()
    ll->longitude = gps.location.lng();  // double TinyGPSLocation::lng()
  }
}

bool isGPSsameAsLastKnown(struct LatLong *lastKnown, struct LatLong *currentKnown) {
  if (lastKnown->latitude == currentKnown->latitude) {
    if (lastKnown->longitude == currentKnown->longitude) {
      return true;
    }
  }

  return false;
}

// Calcutaing haversine distance based on 2 Lat-Longs only makes sense
// if both the Lat-Longs were received around the same time
bool doesBothPeerHaveGPSAtSimilarTime(long localMillis, long peerMillis) {
  long seconds = (localMillis - peerMillis)/1000;

  if (seconds < 0) {
    seconds *= -1;
  }

  // Similar times = ~5 seconds
  if (seconds < 5.0) {
    return true;
  }

  return false;

}
// https://rosettacode.org/wiki/Haversine_formula#C
// Find the distance between 2 lat-long pairs and return the distance in metres, data type double
double distance(double lat1, double lng1, double lat2, double lng2) {
  double dx, dy, dz;
	lng1 -= lng2;
	lng1 *= TO_RAD, lat1 *= TO_RAD, lat2 *= TO_RAD;

	dz = sin(lat1) - sin(lat2);
	dx = cos(lng1) * cos(lat1) - cos(lat2);
	dy = sin(lng1) * cos(lat1);
	return asin(sqrt(dx * dx + dy * dy + dz * dz) / 2) * 2 * R * 1000; // *1000 for metres
}
