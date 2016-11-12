#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(84, 6, NEO_GRB + NEO_KHZ800);

#define RED 0
#define GREEN 100
#define BLUE 100

#define RED2 255
#define GREEN2 0
#define BLUE2 255

#define WAIT 250

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  setStrip(RED1, GREEN1, BLUE1);
  delay(WAIT);
  setStrip(RED2, GREEN2, BLUE2);
  delay(WAIT);
}

void setStrip(int r, int g, int b) {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, r, g, b);
  }
  strip.show();
}
