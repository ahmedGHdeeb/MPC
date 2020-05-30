//Ligthing LED with switch

#define LED 7
#define button 2
int val;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(LED,0);
}

void loop() {
  val = digitalRead(button);
  if(val==1)
  {
    digitalWrite(LED,1);
  }
  else
  {
    digitalWrite(LED,0);
  }
  digitalWrite(LED,0);
}
