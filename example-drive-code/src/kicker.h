#ifndef __SRT_KICKER
#define __SRT_KICKER

#include <arduino.h>

class SRTKicker
{
private:
  int pin;

public:
  SRTKicker(int _pin);
  void kickerOn();
  void kickerOff();
  void kickerPulse();
};

#endif
