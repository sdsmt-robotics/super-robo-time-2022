#ifndef __SRT_KICKER
#define __SRT_KICKER

#define SRT_CLAW_MAX_ANGLE 55
#define SRT_CLAW_MIN_ANGLE 15

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
