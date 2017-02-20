//Author : LearnIt Team
void setup() {

  Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {

    char recvChar = Serial.read();

    Serial.println(recvChar);

  }
}
