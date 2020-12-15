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

  display.display();
}

void displayOLED(double latitude, double longitude, String localMillisStr, double distance, String receivedMillisStr) {
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, String(latitude, 7));
  display.drawString(0, 16, String(longitude, 7));
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 34, localMillisStr + " ago");

  display.drawString(0, 46, String(distance) + "m. away " + receivedMillisStr + " ago");

  display.display();
}
