const int LED = 13;
char x; //variable to store receiving data
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    x = Serial.read();
    if(x == 'N') { // LED will be turned ON only if you send y
      digitalWrite(LED, HIGH);
      delay(1000);
      Serial.println("red: ON");
    }
    else {
      digitalWrite(LED, LOW);
      Serial.println("red: off");
    }
  }
}
