#include "kicker.h"

SRTKicker::SRTKicker(int _pin)
{
  pin = _pin;
}

void SRTKicker::kickerOn()
{
  digitalWrite(pin, HIGH);
}

void SRTKicker::kickerOff()
{
  digitalWrite(pin, LOW);
}

void SRTKicker::kickerPulse()
{
  digitalWrite(pin, HIGH);
  delay(1500);
  digitalWrite(pin, LOW);
}
