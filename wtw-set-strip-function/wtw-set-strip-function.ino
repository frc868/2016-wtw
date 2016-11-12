#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(84, 6, NEO_GRB + NEO_KHZ800);

#define RED 255
#define BLUE 0
#define GREEN 0

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  setStrip(RED, GREEN, BLUE);
}

void setStrip(int r, int g, int b) {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, r, g, b);
  }
  strip.show();
}
