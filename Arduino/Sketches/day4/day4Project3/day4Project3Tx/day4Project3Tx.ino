//Author : LearnIt Team
//Transmitter

#include <SoftwareSerial.h>

SoftwareSerial mySerial(8, 9); //RX,TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("H to On Led and L to Off Led");
}

void loop() {

  if (Serial.available()) {
    char recvCh = Serial.read();
    mySerial.print(recvCh);
  }

}
