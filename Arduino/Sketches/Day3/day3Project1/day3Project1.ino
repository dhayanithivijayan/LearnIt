//Author : LearnIt Team
int sensorPin = A0;
int ledPin = 13;
int sensorValue;

void setup(){
  pinMode(ledPin,OUTPUT);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin,HIGH);
  delay(sensorValue);
  
  digitalWrite(ledPin,LOW);
  delay(sensorValue);
}
