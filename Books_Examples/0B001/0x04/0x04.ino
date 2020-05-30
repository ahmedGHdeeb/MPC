// automatic contorl of LED by using LDR
const int LED = 9;
const int LDR = A0;
float sensorReading;
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  sensorReading = 100 * analogRead(LDR); //get analog reading
  //the calculated level from the voltage drop around resistor in dark
  if ( sensorReading < 970) {
    digitalWrite(LED,HIGH);
  }
  else digitalWrite(LED,LOW);
  delay(1000);
}
