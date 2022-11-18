#include <Adafruit_GPS.h>

#define GPSSerial Serial1

Adafruit_GPS GPS(&GPSSerial);

#define GPSECHO  true

void setup() {
  SerialUSB.begin(115200);
  while (!SerialUSB) { }

  delay(1000);
  SerialUSB.println("Adafruit GPS logging start test!");
  GPS.begin(9600);

  GPS.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCGGA);
  GPS.sendCommand(PMTK_SET_NMEA_UPDATE_1HZ);
  GPS.sendCommand(PGCMD_ANTENNA);
  GPS.sendCommand(PMTK_Q_RELEASE);

  SerialUSB.print("\nSTARTING LOGGING....");
  if (GPS.LOCUS_StartLogger())
    SerialUSB.println(" STARTED!");
  else
    SerialUSB.println(" no response :(");
}

void loop() {
  if (GPSSerial.available()) {
    char c = GPSSerial.read();
    SerialUSB.write(c);
  }
}
