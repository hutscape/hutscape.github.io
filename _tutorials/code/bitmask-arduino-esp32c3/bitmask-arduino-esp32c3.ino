byte transmit = 7;  // define our transmit pin
byte data = 170;    // value to transmit, binary 10101010
byte mask = 1;      // our bitmask
byte bitDelay = 100;

void setup() {
  pinMode(transmit, OUTPUT);
  Serial.begin(115200);

  Serial.print("1 << 10101010:  ");
  Serial.println(1 << data, BIN);

  Serial.print("1 >> 10101010:  ");
  Serial.println(1 >> data, BIN);

  Serial.print("10101010 >> 1:  ");
  Serial.println(data >> 1, BIN);

  Serial.print("10101010 << 1:  ");
  Serial.println(data << 1, BIN);

  for (mask = 00000001; mask > 0; mask <<= 1) {  // iterate through bit mask
    Serial.print("mask: ");
    Serial.print(mask, BIN);
    Serial.print("   data: ");
    Serial.print(data, BIN);
    Serial.print("   data & mask: ");
    if (data & mask) {               // if bitwise AND resolves to true
      digitalWrite(transmit, HIGH);  // send 1
      Serial.println("HIGH");
    } else {                        // if bitwise and resolves to false
      digitalWrite(transmit, LOW);  // send 0
      Serial.println("LOW");
    }
    delayMicroseconds(bitDelay);  // delay
    Serial.println("-------------");
  }
}

void loop() { }
