// https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-the-arduino-101genuino-101-board/experiment-5-reading-a-button-press
int MTR1 = 4;
int MTR2 = 7;
int PW1 = 5;
int PW2 = 6;
int BTN1 = 3;
int BTN2 = 9;
int BTN3 = 10;
int BTN4 = 11;
int BT1;
int BT2;
int BT3;
int BT4;

void setup() {
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);
  pinMode(BTN3, INPUT);
  pinMode(BTN4, INPUT);  
}

void loop() {
  BT1 = digitalRead(BTN1);
  BT2 = digitalRead(BTN2);
  BT3 = digitalRead(BTN3);
  BT4 = digitalRead(BTN4);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (BT1 == LOW) {
     digitalWrite(MTR1, HIGH); 
  analogWrite(PW1, 255);
  } else {
    analogWrite(PW1, 0);
  }
   if (BT2 == LOW) {
     digitalWrite(MTR1, LOW); 
  analogWrite(PW1, 255);
  } else {
    analogWrite(PW1, 0);
  }
    if (BT3 == LOW) {
     digitalWrite(MTR2, HIGH); 
  analogWrite(PW2, 255);
  } else {
    analogWrite(PW2, 0);
  }
   if (BT4 == LOW) {
     digitalWrite(MTR2, LOW); 
  analogWrite(PW2, 255);
  } else {
    analogWrite(PW2, 0);
  }
}


