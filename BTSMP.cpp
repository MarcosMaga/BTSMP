#include "Arduino.h"
#include "BTSMP.h"

BTSMotor::BTSMotor(int RPWM, int LPWM)
{
  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);

  _RPWM = RPWM;
  _LPWM = LPWM;
}

void BTSMotor::run (int velocity)
{
  if(velocity < 0)
  {
    analogWrite(_RPWM, 0);
    analogWrite(_LPWM, velocity * -1);
  }
  else if(velocity > 0)
  {
    analogWrite(_RPWM, velocity);
    analogWrite(_LPWM, 0);
  }
  else
  {
    analogWrite(_RPWM, 0);
    analogWrite(_LPWM, 0);
  }
}
