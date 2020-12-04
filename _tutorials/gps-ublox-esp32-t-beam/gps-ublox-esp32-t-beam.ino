#include "SparkFun_Ublox_Arduino_Library.h"
#include "SSD1306Wire.h"
#include "utilities.h"
#include <MicroNMEA.h>
SFE_UBLOX_GPS myGPS;
SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);

char nmeaBuffer[100];
MicroNMEA nmea(nmeaBuffer, sizeof(nmeaBuffer));

long latitude_mdeg;
long longitude_mdeg;
String latitude_display = "";
String longitude_display = "";
String gps_status = "";
long count = 1000000;

void setup() {
  initBoard();
  delay(1500);

  Serial.println("SparkFun Ublox Example");

  if (myGPS.begin(Serial1) == false) {
    Serial.println(F("Ublox GPS not detected at default I2C address. Please check wiring. Freezing."));
    while (1);
  }

  // Display
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

void loop() {
  myGPS.checkUblox();

  if (nmea.isValid() == true) {
    latitude_mdeg = nmea.getLatitude();
    longitude_mdeg = nmea.getLongitude();
    gps_status = "GPS Fix found!";
  } else {
    latitude_mdeg = count++;
    longitude_mdeg = count++;
    gps_status = "No Fix";
  }

  latitude_display = "Lat: " + String(latitude_mdeg / 1000000., 6);
  longitude_display = "Long: " + String(longitude_mdeg / 1000000., 6);

  Serial.println(gps_status);
  Serial.println(latitude_display);
  Serial.println(longitude_display);

  // display
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_16);

  display.drawString(0, 0, gps_status);
  display.drawString(0, 16, latitude_display);
  display.drawString(0, 32, longitude_display);

  display.display();

  delay(2000);
}

