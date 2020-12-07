#include <HardwareSerial.h>
#include <TinyGPS++.h>

#define GPS_SERIAL_NUM 1
#define GPS_RX_PIN 34
#define GPS_TX_PIN 12
static const uint32_t GPSBaud = 9600;

HardwareSerial GPSSerial(GPS_SERIAL_NUM);
TinyGPSPlus gps;

void setup() {
  Serial.begin(115200);
  GPSSerial.begin(9600, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN);

  Serial.println("Hello GPS");
}

void loop() {
  while (GPSSerial.available() > 0) {
    gps.encode(GPSSerial.read());
    if (gps.location.isUpdated()){
      Serial.print("Latitude= ");
      Serial.print(gps.location.lat(), 6);  // double TinyGPSLocation::lat()
      Serial.print(" Longitude= ");
      Serial.println(gps.location.lng(), 6);  // double TinyGPSLocation::lng()
    }
  }
}
