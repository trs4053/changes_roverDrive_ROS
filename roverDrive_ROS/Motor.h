/*
  Motor.h - Library for working with the Cytron SPG30E-30K.
  Created by Vinay Lanka, January 27, 2021.
*/
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor {
  public:
    //Constructor - Plus and Minus are the Motor output / en_a and en_b are the encoder inputs
    Motor(int plusF, int minusF, int plusB, int minusB, int en_a, int en_b);
    //Spin the motor with a percentage value
    void rotate(int value);
    //Motor Outputs - plus is one direction and minus is the other
    int plusF;
    int minusF;
    int plusB;
    int minusB;
    //Encoder Inputs
    int en_a;
    int en_b;
};

#endif
