#include "gps.h"
#include <HardwareSerial.h>
#include <TinyGPS++.h>

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

void getLatLong(struct LatLong *ll) {
  gps.encode(GPSSerial.read());
  if (gps.location.isUpdated()){
    ll->latitude = gps.location.lat();  // double TinyGPSLocation::lat()
    ll->longitude = gps.location.lng();  // double TinyGPSLocation::lng()
  }
}


