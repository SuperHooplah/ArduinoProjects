//A program that uses an ultrasound sensor to return the distance an object is away in centimeters.

const int trigPin = 2;
const int echoPin = 4;

void setup() {
  Serial.begin(9600);
}

void loop(){
  long duration, inches;
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  Serial.print(inches);
  Serial.print(" centimeters \n");
  delay(500);
}

long microsecondsToInches(long microseconds){
  return microseconds / 29 / 2;
}

