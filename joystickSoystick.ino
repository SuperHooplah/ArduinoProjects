#include <Servo.h>
Servo Emile;
Servo Uggy;
int MTR1 = 12;
int MTR2 = 13;
int PW1 = 3;
int PW2 = 11;
int xPin = A4;
int yPin = A5;
int buttonPin = 2;
int xPosition = 0;
int yPosition = 0;
int buttonState = 0;
int xPin2 = A2;
int yPin2 = A3;
int buttonPin2 = 4;
int xPosition2 = 0;
int yPosition2= 0;
int buttonState2 = 0;
int xPWR;
int yPWR;
int angle = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(xPin2, INPUT);
  pinMode(yPin2, INPUT);
  pinMode(buttonPin2, INPUT_PULLUP); 
  Emile.attach(7);
  Uggy.attach(6);
  // For versions prior to Arduino 1.0.1
  // pinMode(buttonPin, INPUT);
  // digitalWrite(buttonPin, HIGH);
  
}

void loop() {
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  xPosition2 = analogRead(xPin2);
  yPosition2 = analogRead(yPin2);
  buttonState2 = digitalRead(buttonPin2);
  delay(100);
  Serial.print("X 2: ");
  Serial.print(xPosition2);
  Serial.print(" | Y 2: ");
  Serial.print(yPosition2);
  Serial.print(" | Button 2: ");
  Serial.println(buttonState2);
  
   if(xPosition > 540){
  digitalWrite(MTR1, HIGH); 
  analogWrite(PW1, 255);
  }else if(xPosition < 500){
    analogWrite(MTR1, LOW);
    analogWrite(PW1, 255);
  }else{
    analogWrite(PW1, 0);
  }
  
  if(yPosition > 540){
angle -= 10;
    Emile.write(angle);
  }else if(yPosition < 500){
      angle += 10;
    Emile.write(angle);
  }

  if(xPosition2 > 500){
  analogWrite(MTR2, HIGH); 
  analogWrite(PW2, 255);
  }
  else if(xPosition2 < 480){
   analogWrite(MTR2, LOW);
    analogWrite(PW2, 255);
  }else{
    analogWrite(PW2, 0);
  }
  
    if(yPosition2 > 530){
    Uggy.write(90);
  } if(yPosition2 <= 530){
    Uggy.write(170);
  }
  delay(5);
}
