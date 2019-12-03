#include <bluefruit.h>

uint8_t uvindexvalue = 0x0;
#define UUID16_SVC_ENVIRONMENTAL_SENSING 0x181A
#define UUID16_CHR_UV_INDEX 0x2A76

BLEService environmental_sensing_service = BLEService(UUID16_SVC_ENVIRONMENTAL_SENSING);
BLECharacteristic uv_index_characteristic = BLECharacteristic(UUID16_CHR_UV_INDEX);

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("Start!");

  Bluefruit.begin();
  Bluefruit.setName("Palm");

  setupESService();
  startAdv();
}

void loop() {
  uvindexvalue = random(0, 11);

  Serial.print("UV Index: ");
  Serial.println(uvindexvalue);

  if (uv_index_characteristic.indicate(&uvindexvalue, sizeof(uvindexvalue))) {
    Serial.print("Updated UV Index: ");
    Serial.println(uvindexvalue);
  } else {
    Serial.println("UV Index Indicate not set");
  }

  delay(1000);
}

void startAdv(void) {
  Bluefruit.Advertising.addService(environmental_sensing_service);

  Bluefruit.Advertising.addFlags(BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE);
  Bluefruit.Advertising.addTxPower();
  Bluefruit.Advertising.addName();
  Bluefruit.Advertising.restartOnDisconnect(true);
  Bluefruit.Advertising.setInterval(32, 244);
  Bluefruit.Advertising.setFastTimeout(30);
  Bluefruit.Advertising.start(0);
}

void setupESService(void) {
  environmental_sensing_service.begin();
  uv_index_characteristic.setProperties(CHR_PROPS_INDICATE);
  uv_index_characteristic.setPermission(SECMODE_OPEN, SECMODE_NO_ACCESS);
  uv_index_characteristic.setFixedLen(1);
  uv_index_characteristic.begin();
  uv_index_characteristic.write(&uvindexvalue, sizeof(uvindexvalue));
}
