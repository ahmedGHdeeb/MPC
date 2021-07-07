int ledPins[7] = { 2, 3, 4, 5, 6, 7, 8};
int dicePaterns[7][7] = {
  {0,0,0,0,0,0,1},      // 1
  {0,0,1,1,0,0,0},      // 2
  {0,0,1,1,0,1,0},      // 3
  {1,0,1,1,0,1,0},      // 4
  {1,0,1,1,0,1,1},      // 5
  {1,1,1,1,1,1,0},      // 6
  {0,0,0,0,0,0,0}       // Blank
};
int switchPin = 9;
int blank = 6;

void setup() {
  int i = 0;
  for(i = 0; i < 7; i++)
  {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  randomSeed(analogRead(0));
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(switchPin));
  if(digitalRead(switchPin))
  {
    rollTheDice();
  }
  delay(100);
}
void rollTheDice()
{
  int result = 0;
  int lengthOfRoll = random(15, 25);
  for (int i = 0; i < lengthOfRoll; i++)
  {
    result = random(0,6);
    show(result);
    delay(50 + i * 10);
  }
  for(int j = 0; j < 3; j++)
  {
    show(blank);
    delay(100);
    show(result);
    delay(100);
  }
  
}
void show(int result)
{
  Serial.print("Show ");Serial.println(result);
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(ledPins[i], dicePaterns[result][i]);
  }
}
