#include <Servo.h>
Servo ser;
// Pins: Ground - 5V - Control-Pin

void setup() {
  ser.attach(3); // contorl pin
}

void loop() {
  int i = 0;
  for(i =0; i< 180; i++){  ser.write(i); delay(10);}
  for(i =180 ; i>0; i--){  ser.write(i); delay(10);}
}
