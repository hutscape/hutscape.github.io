#include <Adafruit_GPS.h>
#define GPSSerial Serial1

Adafruit_GPS GPS(&GPSSerial);

#define GPSECHO false

uint32_t timer = millis();

void setup() {
  while (!Serial) {}
  SerialUSB.begin(115200);
  SerialUSB.println("Adafruit GPS library basic test!");

  GPS.begin(9600);
  GPS.sendCommand(PMTK_SET_NMEA_OUTPUT_RMCGGA);
  GPS.sendCommand(PMTK_SET_NMEA_UPDATE_1HZ);
  GPS.sendCommand(PGCMD_ANTENNA);

  delay(1000);

  GPSSerial.println(PMTK_Q_RELEASE);
}

void loop() {
  char c = GPS.read();

  if (GPS.newNMEAreceived()) {
    if (!GPS.parse(GPS.lastNMEA())) {
      return;
    }
  }

  if (millis() - timer > 2000) {
    timer = millis();
    SerialUSB.print("\nTime: ");
    if (GPS.hour < 10) { SerialUSB.print('0'); }
    SerialUSB.print(GPS.hour, DEC); SerialUSB.print(':');
    if (GPS.minute < 10) { SerialUSB.print('0'); }
    SerialUSB.print(GPS.minute, DEC); SerialUSB.print(':');
    if (GPS.seconds < 10) { SerialUSB.print('0'); }
    SerialUSB.print(GPS.seconds, DEC); SerialUSB.print('.');
    if (GPS.milliseconds < 10) {
      SerialUSB.print("00");
    } else if (GPS.milliseconds > 9 && GPS.milliseconds < 100) {
      SerialUSB.print("0");
    }
    SerialUSB.println(GPS.milliseconds);
    SerialUSB.print("Date: ");
    SerialUSB.print(GPS.day, DEC); SerialUSB.print('/');
    SerialUSB.print(GPS.month, DEC); SerialUSB.print("/20");
    SerialUSB.println(GPS.year, DEC);
    SerialUSB.print("Fix: ");
    SerialUSB.print((int)GPS.fix);
    SerialUSB.print(" quality: "); SerialUSB.println((int)GPS.fixquality);
    SerialUSB.print("Time [s] since last fix: ");
    SerialUSB.println(GPS.secondsSinceFix(), 3);
    SerialUSB.print("    since last GPS time: ");
    SerialUSB.println(GPS.secondsSinceTime(), 3);
    SerialUSB.print("    since last GPS date: ");
    SerialUSB.println(GPS.secondsSinceDate(), 3);
    if (GPS.fix) {
      SerialUSB.print("Location: ");
      SerialUSB.print(GPS.latitude, 4); SerialUSB.print(GPS.lat);
      SerialUSB.print(", ");
      SerialUSB.print(GPS.longitude, 4); SerialUSB.println(GPS.lon);
      SerialUSB.print("Speed (knots): "); SerialUSB.println(GPS.speed);
      SerialUSB.print("Angle: "); SerialUSB.println(GPS.angle);
      SerialUSB.print("Altitude: "); SerialUSB.println(GPS.altitude);
      SerialUSB.print("Satellites: "); SerialUSB.println((int)GPS.satellites);
    }
  }
}
