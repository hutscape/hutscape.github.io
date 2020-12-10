#include "SSD1306Wire.h"
#define I2C_SDA 21
#define I2C_SCL 22

SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);

void initOLED() {
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.setTextAlignment(TEXT_ALIGN_LEFT);
}

void displayInitOLED() {
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, "Waiting for...");
  display.drawString(0, 18, "GPS fix + LoRa");

  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 36, "?? m. between 2 nodes");

  display.setFont(ArialMT_Plain_10);
  // TODO: Display how long ago the haversine distance was calculated / received
  // instead of just millis() which is not useful
  display.drawString(0, 48, "at " + String(millis()) + " sec");

  display.display();
}

void displayOLED(double latitude, double longitude, double distance) {
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, String(latitude, 7));
  display.drawString(0, 16, String(longitude, 7));

  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 34, String(distance, 3) + "m. between 2 nodes");

  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 46, "at " + String(millis()) + " sec");

  display.display();
}
