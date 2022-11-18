#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include <Wire.h>
#include "Adafruit_VEML6075.h"

Adafruit_VEML6075 uv = Adafruit_VEML6075();

#define SHARP_SCK  12
#define SHARP_MOSI 13
#define SHARP_SS   7

#define VBAT_PIN          (A7)
#define VBAT_MV_PER_LSB   (0.73242188F)   // 3.0V ADC range and 12-bit ADC resolution = 3000mV/4096
#define VBAT_DIVIDER      (0.71275837F)   // 2M + 0.806M voltage divider on VBAT = (2M / (0.806M + 2M))
#define VBAT_DIVIDER_COMP (1.403F)        // Compensation factor for the VBAT divider

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

  readVBAT();
}

void loop(void)
{
  int vbat_raw = readVBAT();
  uint8_t vbat_per = mvToPercent(vbat_raw * VBAT_MV_PER_LSB);
  float vbat_mv = (float)vbat_raw * VBAT_MV_PER_LSB * VBAT_DIVIDER_COMP;

  Serial.print("ADC = ");
  Serial.print(vbat_raw * VBAT_MV_PER_LSB);
  Serial.print(" mV (");
  Serial.print(vbat_raw);
  Serial.print(") ");
  Serial.print("LIPO = ");
  Serial.print(vbat_mv);
  Serial.print(" mV (");
  Serial.print(vbat_per);
  Serial.println("%)");

  display.setRotation(0);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(BLACK);

  display.setCursor(10,10);
  display.println("UV index");
  display.setCursor(10,30);
  display.println(uv.readUVI());

  display.setCursor(10,65);
  display.print("UVA ");
  display.setCursor(10,85);
  display.println(uv.readUVA());

  display.setCursor(10,120);
  display.println("UVB");
  display.setCursor(10,140);
  display.println(uv.readUVA());

  display.refresh();
  delay(1000);
}

int readVBAT(void) {
  int raw;

  // Set the analog reference to 3.0V (default = 3.6V)
  analogReference(AR_INTERNAL_3_0);

  // Set the resolution to 12-bit (0..4095)
  analogReadResolution(12); // Can be 8, 10, 12 or 14

  // Let the ADC settle
  delay(1);

  // Get the raw 12-bit, 0..3000mV ADC value
  raw = analogRead(VBAT_PIN);

  // Set the ADC back to the default settings
  analogReference(AR_DEFAULT);
  analogReadResolution(10);

  return raw;
}

uint8_t mvToPercent(float mvolts) {
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}
