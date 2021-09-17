#include "kicker.h"

SRTKicker::SRTKicker(int _pin)
{
  //set up the WPM channel
  ledcSetup(PWMChannel, PWMFreq, PWMResolution);
  
  //attach the channel and pin
  ledcAttachPin(_pin, PWMChannel);
}

void SRTKicker::kickerOn()
{
    ledcWrite(PWMChannel, rotation);
}

void SRTKicker::kickerOff()
{
    ledcWrite(PWMChannel, 0);
}
