#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include <Wire.h>
#include "Adafruit_VEML6075.h"
#include "Adafruit_Si7021.h"

Adafruit_VEML6075 uv = Adafruit_VEML6075();
Adafruit_Si7021 sensor = Adafruit_Si7021();

#define SHARP_SCK  12
#define SHARP_MOSI 13
#define SHARP_SS   7

#define VBAT_PIN          (A7)

// 3.0V ADC range and 12-bit ADC resolution = 3000mV/4096
#define VBAT_MV_PER_LSB   (0.73242188F)

// 2M + 0.806M voltage divider on VBAT = (2M / (0.806M + 2M))
#define VBAT_DIVIDER      (0.71275837F)

// Compensation factor for the VBAT divider
#define VBAT_DIVIDER_COMP (1.403F)

Adafruit_SharpMem display(SHARP_SCK, SHARP_MOSI, SHARP_SS, 144, 168);

#define BLACK 0
#define WHITE 1

// toggle true or false to enable serial console debug messages
bool debug = false;

struct SensorValues {
  int vbat_raw;
  uint8_t vbat_per;
  float vbat_mv;

  float uvindex;
  float uva;
  float uvb;

  float humidity;
  float temperature;
};

void setup(void) {
  if (debug) {
      Serial.begin(115200);
  }

  initDisplay();
  initUVSensor();
  initTempHumiditySensor();
  initBatt();
}

void loop(void) {
  SensorValues v = getSensorValues();

  display.clearDisplay();

  displayBatt(v.vbat_raw, v.vbat_per, v.vbat_mv);
  displayUV(v.uvindex, v.uva, v.uvb);
  displayTempHumidity(v.temperature, v.humidity);

  display.refresh();
  delay(4000);
}

void initDisplay(void) {
  display.begin();

  display.setRotation(0);
  display.setTextSize(2);
  display.setTextColor(BLACK);

  display.clearDisplay();
}

void initUVSensor(void) {
  if (!uv.begin() && debug) {
    Serial.println("Failed to communicate with VEML6075 sensor, check wiring?");
  }
  if (debug) {
    Serial.println("Found VEML6075 sensor");
  }
}

void initTempHumiditySensor(void) {
  if (!sensor.begin() && debug) {
    Serial.println("Failed to communicate with Si7021 sensor, check wiring?");
  }
  if (debug) {
    Serial.println("Found Si7021 sensor");
  }
}

void initBatt(void) {
  analogReference(AR_INTERNAL_3_0);
  analogReadResolution(12);  // Can be 8, 10, 12 or 14
  delay(1);
}

uint8_t mvToPercent(float mvolts) {
    uint8_t battery_level;

    if (mvolts >= 3000) {
      battery_level = 100;
    } else if (mvolts > 2900) {
      battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    } else if (mvolts > 2740) {
      battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    } else if (mvolts > 2440) {
      battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    } else if (mvolts > 2100) {
      battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    } else {
      battery_level = 0;
    }

    return battery_level;
}

void displayBatt(int vbat_raw, uint8_t vbat_per, float vbat_mv) {
  if (debug) {
    Serial.print("ADC = ");
    Serial.print(vbat_raw * VBAT_MV_PER_LSB);
    Serial.print(" mV (");
    Serial.print(vbat_raw);
    Serial.print(") ");
    Serial.print("LIPO = ");
    Serial.print(vbat_mv);
    Serial.print(" mV (");
    Serial.print(vbat_per);
    Serial.print("%)");
  }
}

void displayUV(float uvindex, float uva, float uvb) {
  if (debug) {
    Serial.print(", UV Index: ");
    Serial.print(uvindex, 2);
    Serial.print(", UVA: ");
    Serial.print(uva, 2);
    Serial.print(", UVB: ");
    Serial.print(uvb, 2);
  }

  display.setCursor(10, 10);
  display.println("UV index");
  display.setCursor(10, 30);
  display.println(uvindex, 0);

  display.setCursor(10, 65);
  display.print("UVA ");
  display.println(uva, 0);

  display.setCursor(10, 85);
  display.print("UVB ");
  display.println(uvb, 0);
}

void displayTempHumidity(float temperature, float humidity) {
  if (debug) {
    Serial.print(" Temperature: ");
    Serial.print(temperature, 2);
    Serial.print("°C, Humidity: ");
    Serial.print(humidity, 2);
    Serial.println(" RH%");
  }

  display.setCursor(10, 120);
  display.print("Temp ");
  display.print(temperature, 0);
  display.println(" C");

  display.setCursor(10, 140);
  display.print("Hum ");
  display.print(humidity, 0);
  display.println(" RH%");
}

SensorValues getSensorValues(void) {
  int vbat_raw = analogRead(VBAT_PIN);

  SensorValues v = {
    vbat_raw,
    mvToPercent(vbat_raw * VBAT_MV_PER_LSB),
    (float)vbat_raw * VBAT_MV_PER_LSB * VBAT_DIVIDER_COMP,

    uv.readUVI(),
    uv.readUVA(),
    uv.readUVB(),

    sensor.readHumidity(),
    sensor.readTemperature()
  };

  return v;
}
