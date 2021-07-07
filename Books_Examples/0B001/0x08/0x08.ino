const int dirPin = 4;
const int stepPin = 5;
const int enablePin = 6;
int x = 0; //variable to count steps
void setup() {
  // put your setup code here, to run once:
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPin, HIGH);
  for(x = 0;x < 200; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }


  
}
