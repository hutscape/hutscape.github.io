#include <bluefruit.h>
#include "Adafruit_VEML6075.h"

/* GATT Services https://www.bluetooth.com/specifications/gatt/services/
    Name: Environmental Sensing
    Uniform Type Identifier: org.bluetooth.service.environmental_sensing
    Assigned Number: 0x181A
    Specification: GSS
*/
#define UUID16_SVC_ENVIRONMENTAL_SENSING 0x181A

/* GATT Characteristics https://www.bluetooth.com/specifications/gatt/characteristics/
    Name: UV Index
    Uniform Type Identifier: org.bluetooth.characteristic.uv_index
    Assigned Number: 0x2A76
    Specification: GSS
*/
#define UUID16_CHR_UV_INDEX 0x2A76

BLEService        ess = BLEService(UUID16_SVC_ENVIRONMENTAL_SENSING);
BLECharacteristic uvic = BLECharacteristic(UUID16_CHR_UV_INDEX);

BLEDis bledis;    // DIS (Device Information Service) helper class instance

Adafruit_VEML6075 uv = Adafruit_VEML6075();

// See https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml

// UV index GATT Characteristic format is in uint8
uint8_t  uvindexvalue = 0x42;

// VEML6075 UV sensor reading is in float
float  readUVIndexValue = 0.0;

// Advanced function prototypes
void startAdv(void);
void setupESService(void);
void connect_callback(uint16_t conn_handle);
void disconnect_callback(uint16_t conn_handle, uint8_t reason);

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);   // for nrf52840 with native usb

  Serial.println("Bluefruit52 UV Index sensor example");
  Serial.println("-------------------------------------\n");

  // Initialise UV sensor VEML6075
  if (!uv.begin()) {
    Serial.println("Failed to communicate with VEML6075 sensor, check wiring?");
  }

  // Initialise the Bluefruit module
  Serial.println("Initialise the Bluefruit nRF52 module");
  Bluefruit.begin();
  Bluefruit.setName("Bluefruit52");

  // Set the connect/disconnect callback handlers
  Bluefruit.Periph.setConnectCallback(connect_callback);
  Bluefruit.Periph.setDisconnectCallback(disconnect_callback);

  // Configure and Start the Device Information Service
  Serial.println("Configuring the Device Information Service");
  bledis.setManufacturer("Adafruit Industries");
  bledis.setModel("Bluefruit Feather52");
  bledis.begin();;

  // Setup the Environmental Sensing service using
  // BLEService and BLECharacteristic classes
  Serial.println("Configuring the Environmental Sensing Service");
  setupESService();

  // Setup the advertising packet(s)
  Serial.println("Setting up the advertising payload(s)");
  startAdv();

  Serial.println("\nAdvertising");
}

void loop() {
  digitalToggle(LED_RED);

  readUVIndexValue = uv.readUVI();
  uvindexvalue = round(abs(readUVIndexValue));  // convert float to uint8_t

  Serial.println("");
  Serial.print("Raw UV Index (float): ");
  Serial.println(readUVIndexValue);

  Serial.print("Raw UV Index (uint8_t): ");
  Serial.println(uvindexvalue);

  if (Bluefruit.connected()) {
    // Note: We use .indicate instead of .write!
    // If it is connected but CCCD is not enabled
    // The characteristic's value is still updated although indicate is not sent
    if (uvic.indicate(&uvindexvalue, sizeof(uvindexvalue))) {
      Serial.print("UV Index Measurement updated to: ");
      Serial.println(uvindexvalue);
    } else {
      Serial.println("ERROR: Indicate not set in the CCCD or not connected!");
    }
  }

  delay(2000);
}

void startAdv(void) {
  // Advertising packet
  Bluefruit.Advertising.addFlags(BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE);
  Bluefruit.Advertising.addTxPower();

  // Include HTM Service UUID
  Bluefruit.Advertising.addService(ess);

  // Include Name
  Bluefruit.Advertising.addName();

  /* Start Advertising
   * - Enable auto advertising if disconnected
   * - Interval:  fast mode = 20 ms, slow mode = 152.5 ms
   * - Timeout for fast mode is 30 seconds
   * - Start(timeout) with timeout = 0 will advertise forever (until connected)
   *
   * For recommended advertising interval
   * https://developer.apple.com/library/content/qa/qa1931/_index.html
   */
  Bluefruit.Advertising.restartOnDisconnect(true);

  // in unit of 0.625 ms
  Bluefruit.Advertising.setInterval(32, 244);

  // number of seconds in fast mode
  Bluefruit.Advertising.setFastTimeout(30);

  // 0 = Don't stop advertising after n seconds
  Bluefruit.Advertising.start(0);
}

void setupESService(void) {
  // Configure the Environmental Sensing service
  // See: https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml
  // Supported Characteristics:
  // Name                         UUID    Requirement Properties
  // ---------------------------- ------  ----------- ----------
  // UV Index                     0x2A76  Mandatory   Read
  ess.begin();

  // Note: You must call .begin() on the BLEService before calling .begin() on
  // any characteristic(s) within that service definition.. Calling .begin() on
  // a BLECharacteristic will cause it to be added to the last BLEService that
  // was 'begin()'ed!

  // Configure the UV Index characteristic
  // See:https://www.bluetooth.com/wp-content/uploads/Sitecore-Media-Library/Gatt/Xml/Characteristics/org.bluetooth.characteristic.uv_index.xml
  // Properties = Indicate
  // Min Len    = 1
  // Max Len    = 1
  // B0         = UINT8 - UV Index measurement unitless
  uvic.setProperties(CHR_PROPS_INDICATE);
  uvic.setPermission(SECMODE_OPEN, SECMODE_NO_ACCESS);
  uvic.setFixedLen(1);
  uvic.setCccdWriteCallback(cccd_callback);  // Optionally capture CCCD updates
  uvic.begin();
  uvic.write(&uvindexvalue, sizeof(uvindexvalue));
}

void connect_callback(uint16_t conn_handle) {
  // Get the reference to current connection
  BLEConnection* connection = Bluefruit.Connection(conn_handle);

  char central_name[32] = { 0 };
  connection->getPeerName(central_name, sizeof(central_name));

  Serial.print("Connected to ");
  Serial.println(central_name);
}

/**
 * Callback invoked when a connection is dropped
 * @param conn_handle connection where this event happens
 * @param reason is a BLE_HCI_STATUS_CODE which can be found in ble_hci.h
 */
void disconnect_callback(uint16_t conn_handle, uint8_t reason) {
  (void) conn_handle;
  (void) reason;

  Serial.println("Disconnected");
  Serial.println("Advertising!");
}

void cccd_callback(uint16_t conn_hdl,
  BLECharacteristic* chr, uint16_t cccd_value) {
    // Display the raw request packet
    Serial.print("CCCD Updated: ");

    // Serial.printBuffer(request->data, request->len);
    Serial.print(cccd_value);
    Serial.println("");

    // Check the characteristic this CCCD update is associated with in case
    // this handler is used for multiple CCCD records.
    if (chr->uuid == uvic.uuid) {
        if (chr->indicateEnabled(conn_hdl)) {
            Serial.println("UV Index Measurement 'Indicate' enabled");
        } else {
            Serial.println("UV Index Measurement 'Indicate' disabled");
        }
    }
}
