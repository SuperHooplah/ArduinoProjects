int MTR1 = 4;
int MTR2 = 7;
int PW1 = 5;
int PW2 = 6;
int xPin = A1;
int yPin = A0;
int buttonPin = 2;
int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
 xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print(" | Button: ");
  Serial.println(buttonState);

  if(xPosition > 410){
  digitalWrite(MTR1, HIGH); 
  analogWrite(PW1, 50);
      if(xPosition > 600){
        analogWrite(PW1, 120);
            if(xPosition > 900){
              analogWrite(PW1, 255);
            }
      }
  }else if(xPosition < 380){
    analogWrite(MTR1, LOW);
    analogWrite(PW1, 100);
      if(xPosition < 200){
        analogWrite(PW1, 180);
            if(xPosition < 100){
              analogWrite(PW1, 255);
            }
  }
}
  if(yPosition > 390){
  digitalWrite(MTR2, HIGH); 
    analogWrite(PW2, 50);
      if(yPosition > 600){
        analogWrite(PW2, 120);
            if(yPosition > 900){
              analogWrite(PW2, 255);
            }
  }else if(yPosition < 370){
     analogWrite(MTR2, LOW);
       analogWrite(PW2, 100);
      if(yPosition < 200){
        analogWrite(PW2, 180);
            if(yPosition < 100){
              analogWrite(PW2, 255);
            }
  }
  }
  }
}
