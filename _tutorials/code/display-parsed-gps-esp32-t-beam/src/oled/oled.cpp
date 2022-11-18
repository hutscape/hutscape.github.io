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

void displayOLED(double latitude, double longitude) {
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 0, "Latitude, Longitude:");

  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 10, String(latitude, 7));
  display.drawString(0, 26, String(longitude, 7));

  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 42, String(millis()));

  display.display();
}
