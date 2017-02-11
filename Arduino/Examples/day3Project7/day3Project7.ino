//Author : LearnIt
#include <Servo.h> 
Servo myservo;   
int pos = 0;  
int delayValue = 15;
int servoStep = 1;
void setup() 
{ 
  myservo.attach(9); 
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos = pos + servoStep) 
  {                                 
    myservo.write(pos);      
    delay(delayValue);    
  } 
  for(pos = 180; pos >= 1; pos= pos - servoStep)  
  {                                
    myservo.write(pos); 
    delay(delayValue);                  
  } 
} 
