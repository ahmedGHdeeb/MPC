#define rPin 8
#define yPin 9
#define gPin 10
#define bPin A0

int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rPin, OUTPUT);pinMode(yPin, OUTPUT);pinMode(gPin, OUTPUT);
  pinMode(bPin, INPUT);
  digitalWrite(12, HIGH);
  Serial.begin(9600);
}

void loop() {
  float i = 0;
   i = analogRead(bPin); 
   if(i > 1000)
   {
    Serial.println(i);
      if(state == 0)
      {
        Serial.println("state 0");
        SetLights(HIGH, LOW, LOW);
        state = 1;
      }
      else if(state == 1)
      {
        Serial.println("state 1");
        SetLights(HIGH, HIGH, LOW);
        state = 2;
      }
      else if(state == 2)
      {
        Serial.println("state 2");
        SetLights(LOW,LOW, HIGH);
        state = 3;
      } 
      else if(state == 3)
      {
        Serial.println("state 3");
        SetLights(LOW, HIGH, LOW);
        state = 0;
      }    
      delay(1000);
   }
  SetLights(LOW, LOW, LOW);
  delay(1000);
}

void SetLights(int r, int y, int g)
{
  digitalWrite(rPin, r);
  digitalWrite(yPin, y);
  digitalWrite(gPin, g);
}
