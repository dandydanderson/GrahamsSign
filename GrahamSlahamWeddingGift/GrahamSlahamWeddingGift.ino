#include <FastLED.h> // LED Library

#define DATA_PIN    13 // Pin data is coming out of in Arduino

//#define LED_TYPE    WS2811 // Light Strip type
//#define COLOR_ORDER GRB
#define NUM_LEDS    108 // Number of LEDs in the project

CRGB leds[NUM_LEDS]; // An array for each led address

int ReadDelay = 650;

int Brightness = 100;

CRGB Blue =  CRGB(0, 0, 255);

// Declare arrays for each line
// CRGB leds[17] // 0-16
// CRGB leds[17] // 22-38
// CRGB leds[17] // 47-63
// CRGB leds[18] // 68-85
// CRGB leds[5] // 98-103

// Declare arrays for each word



void setup() 
{

  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500); // Set power limit so we don't fry the thing
  FastLED.clear();
  FastLED.show();
  FastLED.setBrightness(Brightness);
}

// Main program loop
void loop() 
{
  CRGB newColor =  CRGB(0, 0, 255);
  LightHome(Blue);
  delay(ReadDelay);
  LightMay(Blue);
  delay(ReadDelay);
  LightBe(Blue);
  delay(ReadDelay);
  LightWhere(Blue);
  delay(ReadDelay);
}


//Home 0-3
void LightHome(CRGB color)
{
  FastLED.clear();
  leds[0] = color;
  leds[1] = color;
  leds[2] = color;
  FastLED.show();
}

//may 5-8
void LightMay(CRGB color)
{
  FastLED.clear();
  leds[5] = color;
  leds[6] = color;
  leds[7] = color;
  FastLED.show();
}

//be 10-11
void LightBe(CRGB color)
{
  FastLED.clear();
  leds[10] = color;
  leds[11] = color;
  FastLED.show();
}

//where 13-16
void LightWhere(CRGB color)
{
  FastLED.clear();
  leds[13] = color;
  leds[14] = color;
  leds[15] = color;
  leds[16] = color;
  FastLED.show();
}

//we
//put
//our
//stuff,
//but
//truly,
//Family
//is
//where
//we
//put
//our
//heartSymbol