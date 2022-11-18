byte localAddress = LOCAL_ADDRESS;
byte destinationAddress = DESTINATION_ADDRESS;

void setup() {
  Serial.begin(9600);
  Serial.println("Define options...");
}

void loop() {
  Serial.println("\nLocal address: " + String(localAddress, HEX));
  Serial.println("Destination address: " + String(destinationAddress, HEX));
  delay(1000);
}
