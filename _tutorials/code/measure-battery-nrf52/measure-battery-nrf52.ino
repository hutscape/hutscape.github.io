#define VBAT_PIN          (A7)

// 3.0V ADC range and 12-bit ADC resolution = 3000mV/4096
#define VBAT_MV_PER_LSB   (0.73242188F)

// 2M + 0.806M voltage divider on VBAT = (2M / (0.806M + 2M))
#define VBAT_DIVIDER      (0.71275837F)

// Compensation factor for the VBAT divider
#define VBAT_DIVIDER_COMP (1.403F)

int vbat_raw;
uint8_t vbat_per;
float vbat_mv;

void setup(void) {
  Serial.begin(115200);

  analogReference(AR_INTERNAL_3_0);
  analogReadResolution(12);  // Can be 8, 10, 12 or 14
  delay(1);
}

void loop(void) {
  vbat_raw = analogRead(VBAT_PIN);
  vbat_per = mvToPercent(vbat_raw * VBAT_MV_PER_LSB);

  // FIXME: Using C-style cast.  Use static_cast<float>(...)
  // instead  [readability/casting] [4]
  // Remove [readability/casting] ignore from Makefile
  vbat_mv = (float)vbat_raw * VBAT_MV_PER_LSB * VBAT_DIVIDER_COMP;

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

  delay(4000);
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
