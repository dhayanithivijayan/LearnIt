//Author : LearnIt Team

int sensorPin = A0;
int ledPin = 9;
int sensorValue;
int ledBrightnessValue;

void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  ledBrightnessValue = map(sensorValue,0,1023,0,255);
  analogWrite(ledPin,ledBrightnessValue);
}



