//Author : LearnIt Team
//Receiver

const int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char recvChar = Serial.read();
    Serial.println(recvChar);
    if (recvChar == 'H') {
      Serial.println("Receivec the command --> H");
      digitalWrite(led, HIGH);
      Serial.println("LED is On");
      
    } else if (recvChar == 'L') {
      Serial.println("Received the command --> L");
      digitalWrite(led, LOW);
      Serial.println("LED is Off");
    } else {
      Serial.println("Wrong Command");
    }
  }

}
