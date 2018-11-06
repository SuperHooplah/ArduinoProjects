#include <Servo.h>
Servo henry;
int MTR1 = 12;
int MTR2 = 13;
int PW1 = 3;
int PW2 = 11;
const int trigPin = 2;
const int echoPin = 4;
int goSwitch = 5;

void setup() {
  Serial.begin(9600);
  henry.attach(7);
  henry.write(65);
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  pinMode(goSwitch, OUTPUT);
  digitalWrite(goSwitch, HIGH);
  while(digitalRead(goSwitch) == LOW){
    //Insert really important code that will prevent the destruction of the world, JK it's an infinite loop
  }
}

void loop(){
  int duration;
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  digitalWrite(MTR1, HIGH);
  analogWrite(PW1, 255);
  digitalWrite(MTR2, HIGH);
  analogWrite(PW2, 255);
  Serial.println(duration);
  if(duration < 500){
    henry.write(110);
    delay(200);
    pinMode(trigPin, OUTPUT);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);
}
henry.write(65);
delay(50);
}
