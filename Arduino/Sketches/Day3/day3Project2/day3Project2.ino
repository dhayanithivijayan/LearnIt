//Author : LearnIt Team
int potValue;
int thresholdValue = 250;
int led =13;

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  potValue = analogRead(A0);

  if(potValue < thresholdValue){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  } 
}


