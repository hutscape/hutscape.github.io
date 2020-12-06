#include "SSD1306Wire.h"
#include <HardwareSerial.h>
#include <TinyGPS++.h>

#define I2C_SDA                     21
#define I2C_SCL                     22
#define GPS_SERIAL_NUM 1
#define GPS_RX_PIN 34
#define GPS_TX_PIN 12

static const uint32_t GPSBaud = 9600;

SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);
HardwareSerial GPSSerial(GPS_SERIAL_NUM);
TinyGPSPlus gps;
String lat_display = "";
String long_display = "";
int interval = 2000;
long lastSendTime = 0;

void setup() {
  Serial.begin(115200);
  GPSSerial.begin(9600, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN);
  delay(1500);

  lat_display = "Searching GPS...";
  long_display = "No fix";

  display.init();
  display.flipScreenVertically();

  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, "Searching GPS...");

  display.display();
}

void loop() {
  // Get the GPS information as soon as it is available,
  // but display the lat-long in serial monitor and OLED only every interval
  while (GPSSerial.available() > 0) {
    gps.encode(GPSSerial.read());

    if (gps.location.isUpdated()){
      lat_display = "Lat: " + String(gps.location.lat(), 6);
      long_display = "Long: " + String(gps.location.lng(), 6);
    }
  }

  if (millis() - lastSendTime > interval) {
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

    lastSendTime = millis();
  }
}
