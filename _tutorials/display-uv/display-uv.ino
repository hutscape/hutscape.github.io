#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include <Wire.h>
#include "Adafruit_VEML6075.h"

Adafruit_VEML6075 uv = Adafruit_VEML6075();

#define SHARP_SCK  12
#define SHARP_MOSI 13
#define SHARP_SS   7

Adafruit_SharpMem display(SHARP_SCK, SHARP_MOSI, SHARP_SS, 144, 168);

#define BLACK 0
#define WHITE 1

void setup(void)
{
  Serial.begin(9600);

  // initialize display
  display.begin();
  display.clearDisplay();

  // initialize uv sensor
  if (! uv.begin()) {
    Serial.println("Failed to communicate with VEML6075 sensor, check wiring?");
  }
  Serial.println("Found VEML6075 sensor");
}

void loop(void)
{
  display.setRotation(0);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(BLACK);

  display.setCursor(10,10);
  display.println("UV index");
  display.setCursor(10,30);
  display.println(uv.readUVI());

  display.setCursor(10,65);
  display.println("UVA");
  display.setCursor(10,85);
  display.println(uv.readUVA());

  display.setCursor(10,120);
  display.println("UVB");
  display.setCursor(10,140);
  display.println(uv.readUVA());

  display.refresh();
  delay(1000);
}
