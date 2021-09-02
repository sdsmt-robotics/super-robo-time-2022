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
