#define ledPin 13
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, 1);
  // S.O.S
  // S = {. . . } , first .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
  digitalWrite(ledPin, 1);
  // second .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
  digitalWrite(ledPin, 1);
  // third .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(500);
  digitalWrite(ledPin, 1);
  // O = {---}, first -
  delay(500);
  digitalWrite(ledPin, 0);
  delay(500);
  digitalWrite(ledPin, 1);
  // second -
  delay(500);
  digitalWrite(ledPin, 0);
  delay(500);
  digitalWrite(ledPin, 1);
  // third -
  delay(500);
  digitalWrite(ledPin, 0);
  delay(500);
  digitalWrite(ledPin, 1);
  // S = {. . . } , first .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
  digitalWrite(ledPin, 1);
  // second .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
  digitalWrite(ledPin, 1);
  // third .
  delay(200);
  digitalWrite(ledPin, 0);
  delay(200);
  // wait 1 sec before start again
  delay(2000);  
}
