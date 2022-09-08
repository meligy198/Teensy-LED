#include <FastLED.h>

#define DATA_PIN 6
#define NUM_LEDS 5

CRGB leds[NUM_LEDS];
elapsedMillis tic;

void setup() {
  Serial.begin(9600);
  Serial.println("FastLed Test");
// Uncomment/edit one of the following lines for your leds arrangement.
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  //FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  //FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  
  FastLED.setBrightness(20);
//  for (int i=0; i < NUM_LEDS; i++) {
//    leds[i] = CRGB::Black;
//  }
}

void loop() {
   leds[0] = CRGB(0, 0, 0);
   leds[1] = CRGB(0, 0, 0);
   leds[2] = CRGB(0, 0, 0);
   leds[3] = CRGB(0, 0, 0);
   leds[4] = CRGB(0, 0, 0);
   leds[5] = CRGB(0, 0, 0);
  
    FastLED.show();
    delay(1000);
   leds[0] = CRGB(255, 0, 0);
   leds[1] = CRGB(0, 255, 0);
   leds[2] = CRGB(0, 0, 255);
   leds[3] = CRGB(255, 0, 0);
   leds[4] = CRGB(255, 0, 0);
   leds[5] = CRGB(0, 255, 0);
   FastLED.show();
   delay(1000);

  

//for (int i=0; i < NUM_LEDS; i++) {
//    leds[i] = CRGB::Black;
//    FastLED.show();
//    delay(500);
//    uint8_t red = random8();
//    uint8_t green = random8();
//    uint8_t blue = random8();
//    Serial.printf("R=%3d G=%3d B=%3d\n", red, green, blue);
//    leds[i].setRGB(255, 0, 0);
//    delay(500);
//    FastLED.show();
//  }

  
//  if (tic >= 333) {
//    /* Shift prior colors down all the LEDs */
//    for (int i=NUM_LEDS-1; i > 0; i--) {
//      leds[i] = leds[i - 1];
//    }
//    /* Turn the first LED on with a random color */
//    uint8_t red = random8();
//    uint8_t green = random8();
//    uint8_t blue = random8();
//    Serial.printf("R=%3d G=%3d B=%3d\n", red, green, blue);
//    leds[0].setRGB(red, green, blue);
//
//    FastLED.show();
//    tic = 0;
//  }
}