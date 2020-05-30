// include servo library
#include <Servo.h>
// create servo object to control a servo
Servo myservo;
// variable to store the servo postion
int pos = 0;
void setup() {
  myservo.attach(9); // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
}

void loop() {
  for(pos = 0; pos <= 180; pos +=1) // goes from 0 to 180 degrees
  {
    myservo.write(pos);
    Serial.println(pos);
    delay(100);
  }
  for(pos = 180; pos >= 0; pos -=1) // goes from 180 to 0 degrees
  {
    myservo.write(pos);
    Serial.println(pos);
    delay(100);
  }
}
