#ifndef __SRT_KICKER
#define __SRT_KICKER


#include <Servo.h>

class SRTKicker
{
private:
  int pin;
  int openAngle = 15;
  int closedAngle = 45;
  Servo servo;

public:
  SRTKicker(int _pin);
};

#endif
