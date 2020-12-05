#include "SSD1306Wire.h"
#include "utilities.h"
#include <HardwareSerial.h>
#include <TinyGPS++.h>

#define GPS_SERIAL_NUM 1
#define GPS_RX_PIN 34
#define GPS_TX_PIN 12

static const uint32_t GPSBaud = 9600;

SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);
HardwareSerial GPSSerial(GPS_SERIAL_NUM);
TinyGPSPlus gps;
String lat_display = "";
String long_display = "";

void setup() {
  initBoard();
  GPSSerial.begin(9600, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN);
  delay(1500);

  display.init();
  display.flipScreenVertically();

}

void loop() {
  while (GPSSerial.available() > 0) {
    gps.encode(GPSSerial.read());
    if (gps.location.isUpdated()){
      lat_display = "Lat: " + String(gps.location.lat(), 6);
      long_display = "Long: " + String(gps.location.lng(), 6);
      Serial.println(lat_display);
      Serial.println(long_display);

      display.clear();
      display.setTextAlignment(TEXT_ALIGN_LEFT);

      display.setFont(ArialMT_Plain_16);
      display.drawString(0, 0, lat_display);
      display.setFont(ArialMT_Plain_16);
      display.drawString(0, 16, long_display);
      display.setFont(ArialMT_Plain_16);
      display.drawString(0, 32, String(millis()));

      display.display();
    }
  }
}
