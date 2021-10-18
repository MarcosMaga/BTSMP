#ifndef btsmp
#define btsmp

#include "Arduino.h"

class BTSMotor
{
  public:
    BTSMotor(int RPWM, int LPWM);
    void run(int velocity);

  private:
    int _RPWM; int _LPWM;
    

  
};

#endif
