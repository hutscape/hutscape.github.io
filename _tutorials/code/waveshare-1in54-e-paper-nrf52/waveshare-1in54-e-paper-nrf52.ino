#include <SPI.h>
#include "epd1in54.h"
#include "epdpaint.h"

#define COLORED     0
#define UNCOLORED   1

unsigned char image[1024];
Paint paint(image, 0, 0);
Epd epd;

void setup() {
  Serial.begin(9600);
  if (epd.Init(lut_full_update) != 0) {
      Serial.print("e-Paper init failed");
      return;
  }

  epd.ClearFrameMemory(0xFF);
  epd.DisplayFrame();
  epd.ClearFrameMemory(0xFF);
  epd.DisplayFrame();

  paint.SetRotate(ROTATE_0);
  paint.SetWidth(200);
  paint.SetHeight(24);

  paint.Clear(UNCOLORED);
  paint.DrawStringAt(10, 4, "Hello world!", &Font16, COLORED);
  epd.SetFrameMemory(paint.GetImage(), 0, 10, paint.GetWidth(), paint.GetHeight());

  paint.Clear(UNCOLORED);
  paint.DrawStringAt(10, 4, "e-Paper+nRF52", &Font16, COLORED);
  epd.SetFrameMemory(paint.GetImage(), 0, 30, paint.GetWidth(), paint.GetHeight());

  epd.DisplayFrame();

  delay(2000);
  epd.Sleep();
}

void loop() { }
