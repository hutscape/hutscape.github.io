#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 60
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(
    NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// 60 pixels * 200 ms = 12 seconds to display the entire ring
#define DELAYVAL 200

void setup() {
  Serial.begin(9600);
  while (!Serial) {}
  Serial.println("Start Neopixel!");

  pixels.begin();
  pixels.show();
  pixels.setBrightness(50);
}

void loop() {
  pixels.clear();

  Serial.print("Pixel #1 at ");
  Serial.print(String(millis()));
  Serial.println("ms");

  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
    delay(DELAYVAL);
  }

  Serial.print("Pixel #60 at ");
  Serial.print(String(millis()));
  Serial.println("ms");
}
