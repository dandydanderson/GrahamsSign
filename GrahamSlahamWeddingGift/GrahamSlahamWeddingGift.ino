#include <FastLED.h> // LED Library

#define DATA_PIN    13 // Pin data is coming out of in Arduino

//#define LED_TYPE    WS2811 // Light Strip type
//#define COLOR_ORDER GRB
#define NUM_LEDS    108 // Number of LEDs in the project

CRGB leds[NUM_LEDS]; // An array for each led address

int ReadDelay = 500;

int BlinkDelay = 200;

int Brightness = 100;

CRGB Blue =  CRGB(0, 0, 255);
CRGB Red =  CRGB(0, 255, 0);

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
  LightHome(Blue);
  delay(ReadDelay);
  LightMay(Blue);
  delay(ReadDelay);
  LightBe(Blue);
  delay(ReadDelay);
  LightWhere(Blue);
  delay(ReadDelay);

  LightWe(Blue);
  delay(ReadDelay);

  LightPut(Blue);
  delay(ReadDelay);

  LightOur(Blue);
  delay(ReadDelay);

  LightStuff(Blue);
  delay(ReadDelay);

  LightBut(Blue);
  delay(ReadDelay);

  LightTruly(Blue);
  delay(ReadDelay);

  LightFamily(Blue);
  delay(ReadDelay);

  LightIs(Blue);
  delay(ReadDelay);

  LightWhere2(Blue);
  delay(ReadDelay);

  LightWe2(Blue);
  delay(ReadDelay);

  LightPut2(Blue);
  delay(ReadDelay);

  LightOur2(Blue);
  delay(ReadDelay);

  LightHeart(Red);
  delay(ReadDelay);


  // finale!
  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

  LightBut(Red);
  delay(BlinkDelay);

  LightStuff(Red);
  delay(BlinkDelay);

}

//---------------------------------------

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

//---------------------------------------

//we 22-24
void LightStuff(CRGB color)
{
  FastLED.clear();
  leds[23] = color;
  leds[24] = color;
  leds[25] = color;
  leds[26] = color;
  FastLED.show();
}

//put 26-29
void LightOur(CRGB color)
{
  FastLED.clear();
  leds[28] = color;
  leds[29] = color;
  leds[30] = color;
  FastLED.show();
}

//our 30-32
void LightPut(CRGB color)
{
  FastLED.clear();
  leds[32] = color;
  leds[33] = color;
  leds[34] = color;
  FastLED.show();
}

//stuff, 34-38
void LightWe(CRGB color)
{
  FastLED.clear();
  leds[36] = color;
  leds[37] = color;
  FastLED.show();
}

//---------------------------------------

//but 47-49
void LightBut(CRGB color)
{
  FastLED.clear();
  leds[48] = color;
  leds[49] = color;
  leds[50] = color;
  FastLED.show();
}

//truly, 51-55
void LightTruly(CRGB color)
{
  FastLED.clear();
  leds[51] = color;
  leds[52] = color;
  leds[53] = color;
  leds[54] = color;
  leds[55] = color;
  FastLED.show();
}

//Family 57-60
void LightFamily(CRGB color)
{
  FastLED.clear();
  leds[58] = color;
  leds[59] = color;
  leds[60] = color;
  leds[61] = color;
  FastLED.show();
}

//is 61-63
void LightIs(CRGB color)
{
  FastLED.clear();
  leds[62] = color;
  leds[63] = color;
  FastLED.show();
}

//---------------------------------------

//where 68-71
void LightOur2(CRGB color)
{
  FastLED.clear();
  leds[72] = color;
  leds[73] = color;
  FastLED.show();
}

//we 72-74
void LightPut2(CRGB color)
{
  FastLED.clear();
  leds[75] = color;
  leds[76] = color;
  FastLED.show();
}

//put 75-77
void LightWe2(CRGB color)
{
  FastLED.clear();
  leds[77] = color;
  leds[78] = color;
  FastLED.show();
}

//our 79-81
void LightWhere2(CRGB color)
{
  FastLED.clear();
  leds[80] = color;
  leds[81] = color;
  leds[82] = color;
  leds[83] = color;
  FastLED.show();
}

//---------------------------------------

//heartSymbol
void LightHeart(CRGB color)
{
  FastLED.clear();
  leds[99] = color;
  leds[100] = color;
  leds[101] = color;
  leds[102] = color;
  FastLED.show();
}