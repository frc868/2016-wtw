#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(84, 6, NEO_GRB + NEO_KHZ800);

#define RED 255
#define GREEN 0
#define BLUE 0

#define WAIT 10
void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  int val = 0;
  boolean increase = true;

  if(increase) {
    val++;
  } else {
    val--;
  }

  if(val >= 255) increase = false;
  if(val <= 0) increase = true;

  setStrip(RED * val / 255, GREEN * val / 255, BLUE * val / 255);
  delay(WAIT);
}
