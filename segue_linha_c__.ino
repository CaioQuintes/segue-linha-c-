#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  pinMode(3,INPUT);
  pinMode(9,INPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(A0+5,INPUT);
  pinMode(A0+1,INPUT);
  while(1) {
      if((digitalRead(3) == 1.000000)  &&  (digitalRead(9) == 1.000000)){
        digitalWrite(4,1);
        digitalWrite(2,1);

      }
      if((analogRead(A0+5) == 0.000000)  &&  (analogRead(A0+1) == 1.000000)){
        digitalWrite(4,0);
        digitalWrite(2,1);

      }
      if((analogRead(A0+5) == 1.000000)  &&  (analogRead(A0+1) == 0.000000)){
        digitalWrite(4,1);
        digitalWrite(2,0);

      }
      if((analogRead(A0+5) == 0.000000)  &&  (analogRead(A0+1) == 0.000000)){
        digitalWrite(4,0);
        digitalWrite(2,0);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
