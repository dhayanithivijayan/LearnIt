//Author : LearnIt Team

sensorPin = A0;
tonePin = 9;
void setup() {
}

void loop() {
  int sensorReading = analogRead(A0);
  Serial.println(sensorReading);
  // map the analog input range 
  //(in this case, 400 - 1000 from the photoresistor)
  // to the output pitch range (120 - 1500Hz)
  int thisPitch = map(sensorReading, 400, 1000, 0, 1023);

  // play the pitch:
  tone(tonePin, thisPitch, 10);
}
