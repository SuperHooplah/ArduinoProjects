#include <Servo.h>
Servo henry;
int MTR1 = 4;
int MTR2 = 7;
int PW1 = 5;
int PW2 = 6;

void setup() {
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);  
  henry.attach(11);  
}

void loop(){
  digitalWrite(MTR1, HIGH); 
  analogWrite(PW1, 255);
  digitalWrite(MTR2, HIGH);
  analogWrite(PW2, 255);
  henry.write(180);
  delay(1000);
    digitalWrite(MTR1, LOW); 
  analogWrite(PW1, 255);
  digitalWrite(MTR2, LOW);
  analogWrite(PW2, 255);
  henry.write(0);
  delay(1000);
    digitalWrite(MTR1, LOW); 
  analogWrite(PW1, 0);
  digitalWrite(MTR2, LOW);
  analogWrite(PW2, 0);
  henry.write(180);
  delay(1000);
  henry.write(0);
  delay(1000);
    digitalWrite(MTR1, HIGH); 
  analogWrite(PW1, 255);
  delay(1000);
   digitalWrite(MTR1, LOW); 
  analogWrite(PW1, 255);
  delay(1000);
     digitalWrite(MTR1, LOW); 
  analogWrite(PW1, 0);
    digitalWrite(MTR2, HIGH);
  analogWrite(PW2, 255);
  delay(1000);
    digitalWrite(MTR2, LOW);
  analogWrite(PW2, 255);
  delay(1000);
     digitalWrite(MTR2, LOW);
  analogWrite(PW2, 0);
}

