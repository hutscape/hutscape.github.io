// Demonstrates the difference between pass by value
// and pass by reference in C++ using Arduino ESP32-C3

void setup() {
  Serial.begin(115200);
  int originalValue = 5;

  passByValue(originalValue);
  Serial.print("Pass by Value: ");
  Serial.println(originalValue);  // Outputs 5

  passByReference(originalValue);
  Serial.print("Pass by Reference: ");
  Serial.println(originalValue);  // Outputs 10

  passByReferenceWithPointer(&originalValue);
  Serial.print("Pass by Reference with Pointer: ");
  Serial.println(originalValue);  // Outputs 15
}

void loop() {
}

void passByValue(int value) {
  value = 10;
}

// Linting error:
// Is this a non-const reference?
// If so, make const or use a pointer: int &value
void passByReference(int &value) {
  value = 10;
}

void passByReferenceWithPointer(int *value) {
  *value = 15;
}
