/**
*The purpose of this code is to create a basic motor system. It is designed to be combined with higher concepts
*such as joystick use or ultrasound sensors.
*@author Emily Hickey
*/

int MTR1 = 12;
int MTR2 = 13;
int PW1 = 3;
int PW2 = 11;

void setup() {
  //Connects all of the motors and their powers to pins on the board
  pinMode(MTR1, OUTPUT);
  pinMode(MTR2, OUTPUT);
  pinMode(PW1, OUTPUT);
  pinMode(PW2, OUTPUT);
  
  //Generate a "switch" that was a wire
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  while(digitalRead(2) == LOW){
    /**Infintie loop
    *To explain further, this infinite loop will run until the wire is pulled from
    *one of its two pins, thus breaking the connection. Once the infinite loop ends
    The code moves on to the loop() method */
  }
  } 

void loop(){
  //Make both motors move at full power (255) in the same direction
  digitalWrite(MTR1, HIGH);
  analogWrite(PW1, 255);
  digitalWrite(MTR2, LOW);
  analogWrite(PW2, 255);
}
