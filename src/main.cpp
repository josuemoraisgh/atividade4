#include <Arduino.h>
#include "inindThread.h"
#define PINLED 13

void piscaLed()
{
  bool valueLed = digitalRead(PINLED);
  digitalWrite(PINLED, !valueLed);
}

void setup()
{
  pinMode(PINLED, OUTPUT);
  threadSetup(piscaLed, 500);
}

void loop()
{
  // piscaLed();
  // delay(500);
}
