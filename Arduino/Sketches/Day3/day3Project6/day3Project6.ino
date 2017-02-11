//Author : team LearnIt
//include servo library
#include <Servo.h>
Servo myservo;
void setup(){
  //attaches servo on pin 9
  myservo.attach(9);
  myservo.write(150);
}

void loop(){
  //do nothing
}



