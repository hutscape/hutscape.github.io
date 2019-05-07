#define RTCMEMORYSTART 65
#define MAXHOUR 5 // number of hours to deep sleep for

extern "C" {
#include "user_interface.h"
}

typedef struct {
  int count;
} rtcStore;

rtcStore rtcMem;

void setup() {
  Serial.begin(115200);
  Serial.println("");

  Serial.println("Waking up...");

  Serial.print("Reading ");
  readFromRTCMemory();
  Serial.print("Writing ");
  writeToRTCMemory();

  Serial.print("Sleeping for 5 seconds. ");
  if (rtcMem.count == 0) {
    Serial.println("Will wake up with radio!");
    ESP.deepSleep(5000000, WAKE_RFCAL);
  } else {
    Serial.println("Will wake up without radio!");
    ESP.deepSleep(5000000, WAKE_RF_DISABLED);
  }
}

void loop() {}

void readFromRTCMemory() {
  system_rtc_mem_read(RTCMEMORYSTART, &rtcMem, sizeof(rtcMem));

  Serial.print("count = ");
  Serial.println(rtcMem.count);
  yield();
}

void writeToRTCMemory() {
  if (rtcMem.count <= MAXHOUR) {
    rtcMem.count++;
  } else {
    rtcMem.count = 0;
  }

  system_rtc_mem_write(RTCMEMORYSTART, &rtcMem, 4);

  Serial.print("count = ");
  Serial.println(rtcMem.count);
  yield();
}
