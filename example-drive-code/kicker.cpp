#include "kicker.h"

SRTKicker::SRTKicker(int _pin)
{
  pin = _pin;
}

void kickerOn()
{
  digitalWrite(_pin, HIGH);
}

void kickerOff()
{
  digitalWrite(_pin, LOW);
}
