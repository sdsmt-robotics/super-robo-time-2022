#include "kicker.h"

SRTKicker::SRTKicker(int _pin)
{
  pin = _pin;
  digitalWrite(pin, LOW);
}

void SRTKicker::kickerOn()
{
  digitalWrite(pin, HIGH);
}

void SRTKicker::kickerOff()
{
  digitalWrite(pin, LOW);
}
