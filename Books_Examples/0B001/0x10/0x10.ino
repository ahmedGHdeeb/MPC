#define trig 13
#define echo 12
#define led 11
#define led2 10

void setup() {
  Serial.begin(115200);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  float time_, distance;
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  time_ = pulseIn(echo, HIGH);
  distance = (time_/2) / 29.1; /*in cm*/
  Serial.println(distance);
  if(distance < 10 /*cm*/) { // This is where the LED On/Off happens
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH); 
  }
}
