//Author : LearnIt Team

int sensorPin = A0;
int ledPin = 9;
int lightThreshold = 350;
int sensorValue;

void setup(){
pinMode(ledPin,OUTPUT);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  if(sensorValue < 350){
    digitalWrite(ledPin,LOW);
  }else{
    digitalWrite(ledPin,HIGH);
  }
}



