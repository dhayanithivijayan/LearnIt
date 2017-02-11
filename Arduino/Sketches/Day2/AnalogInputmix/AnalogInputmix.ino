//author Learnit
int sensorPin = A0;    
int greenPin = 13;
int redPin = 12;
int bluePin = 11;      
int sensorValue = 0;  
void setup() {
  
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin , OUTPUT);
}

void loop() {
 
  sensorValue = analogRead(sensorPin);
  digitalWrite(redPin, HIGH);
  delay(sensorValue);
  digitalWrite(redPin, LOW);
  delay(sensorValue);
    digitalWrite(bluePin, HIGH);
  delay(sensorValue);
  digitalWrite(bluePin, LOW);
  delay(sensorValue);
    digitalWrite(greenPin, HIGH);
  delay(sensorValue);
  digitalWrite(greenPin, LOW);
  delay(sensorValue);
}







