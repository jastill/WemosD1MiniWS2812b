/**
 * Simple Example for Wemos D1 Mini and WS2812b 24 led ring.
 */

#include <Adafruit_NeoPixel.h>
 
#define LED_PIN D2

#define NUMPIXELS 24
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

/**
 * Setup the LED String
 */
void setup() {
  pixels.begin();
}

/**
 * Cycle the LEDs leaving the previous LED as Blue
 */
void loop()  {
  // Delay between LED changes in mS
  int delayval = 50; 

  for(int i=0;i<NUMPIXELS;i++) {
    // For each LED Cycle through Red, Green and Blue
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(delayval);
    pixels.setPixelColor(i, pixels.Color(0,255,0));
    pixels.show();
    delay(delayval);
    pixels.setPixelColor(i, pixels.Color(0,0,255));
    pixels.show();
    delay(delayval);
  }
}
