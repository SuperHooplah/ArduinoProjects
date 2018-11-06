#include <Servo.h>
Servo Michael;
int angle;

void setup() {
  Michael.attach(8);
}

void loop() {
  delay(100); // add some delay between reads  increment += 5;
  if(angle < 180){
  angle = angle + 5;
  Michael.write(angle);
  delay(100);
  }
}
