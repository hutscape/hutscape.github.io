#define GPSSerial Serial1

void setup() {
  while (!SerialUSB) {}
  SerialUSB.begin(115200);
  GPSSerial.begin(9600);

  SerialUSB.println("Hello GPS");
}

void loop() {
  if (SerialUSB.available()) {
    char c = SerialUSB.read();
    GPSSerial.write(c);
  }
  if (GPSSerial.available()) {
    char c = GPSSerial.read();
    SerialUSB.write(c);
  }
}
