#include "Arduino.h"
#include "Motor.h"


Motor::Motor(int plusF, int minusF, int plusB, int minusB, int en_a, int en_b) {
  pinMode(plusF,OUTPUT);
  pinMode(minusF,OUTPUT);
  pinMode(plusB,OUTPUT);
  pinMode(minusB,OUTPUT);
  pinMode(en_a,INPUT_PULLUP);
  pinMode(en_b,INPUT_PULLUP);
  Motor::plusF = plusF;
  Motor::minusF = minusF;
  Motor::plusB = plusB;
  Motor::minusB = minusB;
  Motor::en_a = en_a;
  Motor::en_b = en_b;
}

void Motor::rotate(int value) {
  if(value>=0){
    
//    Serial.println("called");
//    Serial.println(plus);
    int out = map(value, 0, 100, 0, 255);
    analogWrite(plusF,out);
    analogWrite(minusF,0);
    analogWrite(plusB,out);
    analogWrite(minusB,0);
  }else{
    
    int out = map(value, 0, -100, 0, 255);
    analogWrite(plusF,0);
    analogWrite(minusF,out);
    analogWrite(plusB,0);
    analogWrite(minusB,out);
  }
}
