int MTR1 = 12;
int MTR2 = 13;
int PW1 = 3;
int PW2 = 11;

void setup() {
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  while(digitalRead(2) == LOW){
    //Infintie loop 
  }
  }

void loop(){
  digitalWrite(MTR1, HIGH);
  analogWrite(PW1, 255);
  digitalWrite(MTR2, LOW);
  analogWrite(PW2, 255);
}
