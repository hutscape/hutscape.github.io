#include "SSD1306Wire.h"
#define I2C_SDA 21
#define I2C_SCL 22

SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);

void initOLED() {
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
}

void displayOLED() {
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 0, "Hola");
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 10, "Ni Hao Ma");
  display.setFont(ArialMT_Plain_24);
  display.drawString(0, 26, "Namaste");

  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 50, String(millis()));

  display.display();
}
