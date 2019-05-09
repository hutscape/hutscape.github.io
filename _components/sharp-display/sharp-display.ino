#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>

// pins of Adafruit nRF52 Monochrome SHARP display 168x144 pixels
#define SHARP_SCK  12
#define SHARP_MOSI 13
#define SHARP_SS   7

Adafruit_SharpMem display(SHARP_SCK, SHARP_MOSI, SHARP_SS, 144, 168);

#define BLACK 0
#define WHITE 1

int minorHalfSize;

void setup(void)
{
  Serial.begin(9600);
  Serial.println("Hello!");

  display.begin();
  display.clearDisplay();

  minorHalfSize = min(display.width(), display.height()) / 2;

  display.drawPixel(10, 10, BLACK);
  display.refresh();
  delay(500);
  display.clearDisplay();

 testdrawline();
 delay(500);
 display.clearDisplay();

 testdrawrect();
 delay(500);
 display.clearDisplay();

 testfillrect();
 display.refresh();
 delay(500);
 display.clearDisplay();

 display.fillCircle(display.width()/2, display.height()/2, 10, BLACK);
 display.refresh();
 delay(500);
 display.clearDisplay();

 testdrawroundrect();
 display.refresh();
 delay(500);
 display.clearDisplay();

 testfillroundrect();
 display.refresh();
 delay(500);
 display.clearDisplay();

 testdrawtriangle();
 display.refresh();
 delay(500);
 display.clearDisplay();

 testfilltriangle();
 display.refresh();
 delay(500);
 display.clearDisplay();

  testdrawchar();
  display.refresh();
  for(int i=0; i<4; i++) {
    display.refresh();
    delay(1000);
  }
}

void loop(void)
{
  for(int i=0; i<4; i++) {
    display.setRotation(i);
    display.clearDisplay();

    display.setTextSize(1);
    display.setTextColor(BLACK);
    display.setCursor(0,0);
    display.println("Hello, world!");
    display.setTextColor(WHITE, BLACK);
    display.println(3.141592);
    display.setTextSize(2);
    display.setTextColor(BLACK);
    display.print("0x"); display.println(0xDEADBEEF, HEX);

    for(int j=0; j<4; j++) {
      display.refresh();
      delay(1000); // 1/2 sec delay
    }
  }
}

void testdrawline() {
  for (int i=0; i<display.width(); i+=4) {
    display.drawLine(0, 0, i, display.height()-1, BLACK);
    display.refresh();
  }
  for (int i=0; i<display.height(); i+=4) {
    display.drawLine(0, 0, display.width()-1, i, BLACK);
    display.refresh();
  }
  delay(250);

  display.clearDisplay();
  for (int i=0; i<display.width(); i+=4) {
    display.drawLine(0, display.height()-1, i, 0, BLACK);
    display.refresh();
  }
  for (int i=display.height()-1; i>=0; i-=4) {
    display.drawLine(0, display.height()-1, display.width()-1, i, BLACK);
    display.refresh();
  }
  delay(250);

  display.clearDisplay();
  for (int i=display.width()-1; i>=0; i-=4) {
    display.drawLine(display.width()-1, display.height()-1, i, 0, BLACK);
    display.refresh();
  }
  for (int i=display.height()-1; i>=0; i-=4) {
    display.drawLine(display.width()-1, display.height()-1, 0, i, BLACK);
    display.refresh();
  }
  delay(250);

  display.clearDisplay();
  for (int i=0; i<display.height(); i+=4) {
    display.drawLine(display.width()-1, 0, 0, i, BLACK);
    display.refresh();
  }
  for (int i=0; i<display.width(); i+=4) {
    display.drawLine(display.width()-1, 0, i, display.height()-1, BLACK);
    display.refresh();
  }
  delay(250);
}

void testdrawrect(void) {
  for (int i=0; i<minorHalfSize; i+=2) {
    display.drawRect(i, i, display.width()-2*i, display.height()-2*i, BLACK);
    display.refresh();
  }
}

void testfillrect(void) {
  uint8_t color = BLACK;
  for (int i=0; i<minorHalfSize; i+=3) {

    display.fillRect(i, i, display.width()-i*2, display.height()-i*2, color&1);
    display.refresh();
    color++;
  }
}

void testdrawroundrect(void) {
  for (int i=0; i<minorHalfSize/2; i+=2) {
    display.drawRoundRect(i, i, display.width()-2*i, display.height()-2*i, minorHalfSize/2, BLACK);
    display.refresh();
  }
}

void testfillroundrect(void) {
  uint8_t color = BLACK;
  for (int i=0; i<minorHalfSize/2; i+=2) {
    display.fillRoundRect(i, i, display.width()-2*i, display.height()-2*i, minorHalfSize/2, color&1);
    display.refresh();
    color++;
  }
}

void testdrawtriangle(void) {
  for (int i=0; i<minorHalfSize; i+=5) {
    display.drawTriangle(display.width()/2, display.height()/2-i,
                     display.width()/2-i, display.height()/2+i,
                     display.width()/2+i, display.height()/2+i, BLACK);
    display.refresh();
  }
}

void testfilltriangle(void) {
  uint8_t color = BLACK;
  for (int i=minorHalfSize; i>0; i-=5) {
    display.fillTriangle(display.width()/2  , display.height()/2-i,
                         display.width()/2-i, display.height()/2+i,
                         display.width()/2+i, display.height()/2+i, color & 1);
    display.refresh();
    color++;
  }
}

void testdrawchar(void) {
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(0,0);
  display.cp437(true);

  for (int i=0; i < 256; i++) {
    if (i == '\n') continue;
    display.write(i);
  }
  display.refresh();
}
