#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 60
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(
    NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// 10 pixels * 200 ms = 2 seconds to display 10 pixels
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
  Serial.print(String(millis()/1000));
  Serial.println("s");

  for (int i = 0; i < 10; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    // TODO show all pixels at one go after the for loop without a delay
    pixels.show();
    delay(DELAYVAL);
  }

  Serial.print("Pixel #10 at ");
  Serial.print(String(millis()/1000));
  Serial.println("s");

  delay(2000);
}
