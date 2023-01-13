#define uS_TO_S_FACTOR 1000000ULL
#define TIME_TO_SLEEP 5  // in seconds
#define LED 3  // or LED_BUILTIN to use the on-board LED
#define BLINKING_NUMNER 10  // Blink the LED 10 times
RTC_DATA_ATTR int bootCount = 0;

void print_wakeup_reason() {
  esp_sleep_wakeup_cause_t wakeup_reason;

  wakeup_reason = esp_sleep_get_wakeup_cause();

  switch (wakeup_reason) {
    case ESP_SLEEP_WAKEUP_EXT0:
      Serial.println("Wakeup caused by external signal using RTC_IO");
      break;
    case ESP_SLEEP_WAKEUP_EXT1:
      Serial.println("Wakeup caused by external signal using RTC_CNTL");
      break;
    case ESP_SLEEP_WAKEUP_TIMER:
      Serial.println("Wakeup caused by timer");
      break;
    case ESP_SLEEP_WAKEUP_TOUCHPAD:
      Serial.println("Wakeup caused by touchpad");
      break;
    case ESP_SLEEP_WAKEUP_ULP:
      Serial.println("Wakeup caused by ULP program");
      break;
    default:
      Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
      break;
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  ++bootCount;
  Serial.println("Boot number: " + String(bootCount));

  print_wakeup_reason();

  esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
  Serial.println("Setup ESP32 to sleep for every "
    + String(TIME_TO_SLEEP)
    + " Seconds");

  // Blinking the LED gives a visual indication
  // that the dev board is awake.
  // Also, it gives some time to upload the firmware
  // while the port is available during while awake.
  Serial.println("Blink the LED while awake");
  blink(BLINKING_NUMNER);

  Serial.println("Going to sleep for "
    + String(TIME_TO_SLEEP)
    + " seconds now");
  Serial.flush();
  esp_deep_sleep_start();
  Serial.println("This will never be printed");
}

void loop() { }

void blink(int times) {
  for (int i = 0; i <= times; i++) {
    digitalWrite(LED, LOW);
    delay(1000);

    digitalWrite(LED, HIGH);
    delay(1000);
  }
}
