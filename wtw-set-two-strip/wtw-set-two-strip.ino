#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(84, 6, NEO_GRB + NEO_KHZ800);

#define RED1 255
#define GREEN1 0
#define BLUE1 0

#define RED2 0
#define GREEN2 255
#define BLUE2 0
void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  for(int i = 0; i < strip.numPixels(); i += 2) {
    strip.setPixelColor(i, RED1, GREEN1, BLUE1);
  }
  for(int i = 1; i < strip.numPixels(); i += 2) {
    strip.setPixelColor(i, RED2, GREEN2, BLUE2);
  }
  strip.show();
}
