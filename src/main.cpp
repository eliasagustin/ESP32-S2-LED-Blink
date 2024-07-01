#include <Arduino.h>
#include <FastLED.h>
#include <driver/gpio.h>

#define DATA_PIN GPIO_NUM_18
#define NUM_LEDS 1
// put function declarations here:
int i=0;
CRGB leds[1];
void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  
  Serial.println("Fin Setup");
}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);

if (i==0) {leds[0] = CRGB(255, 0, 0);}
if (i==1) {leds[0] = CRGB(0, 255, 0);}
if (i==2) {leds[0] = CRGB(0, 0, 255);}
FastLED.show();
Serial.println(i);
if (i>=2) {i=0;} else {i++;}
}
