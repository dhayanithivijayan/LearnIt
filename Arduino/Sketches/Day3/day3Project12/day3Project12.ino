//Author : LearnIt Team
const int led = 13;
const char onCommand = 'a';
const char offCommand = 'b';

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char recvChar = Serial.read();
    
    if (recvChar == onCommand)
      digitalWrite(led, HIGH);
      
    else if (recvChar == offCommand)
      digitalWrite(led, LOW);
      
    else
      Serial.println("Wrong Command");
  }
}
