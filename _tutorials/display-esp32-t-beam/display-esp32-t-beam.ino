#include "SSD1306Wire.h"
#include "utilities.h"

SSD1306Wire display(0x3c, I2C_SDA, I2C_SCL);

void setup() {
  initBoard();
  delay(1500);

  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);

  display.clear();

  // create more fonts at http://oleddisplay.squix.ch/
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 0, "Hola");
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 10, "Ni Hao Ma");
  display.setFont(ArialMT_Plain_24);
  display.drawString(0, 26, "Namaste");

  display.setTextAlignment(TEXT_ALIGN_RIGHT);
  display.drawString(10, 128, String(millis()));

  display.display();
}

void loop() { }
