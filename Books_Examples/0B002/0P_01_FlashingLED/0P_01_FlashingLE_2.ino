#define ledPin 13
int duration [] = { 200, 200, 200, 500, 500, 500, 200, 200, 200};
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int i = 0;
  for(i = 0; i < 9; i++) 
  {
    flash(duration[i]);
  }
  delay(3000);
}

void flash(int d)
{
  digitalWrite(ledPin, HIGH);
  delay(d);
  digitalWrite(ledPin, LOW);
  delay(d);
}
