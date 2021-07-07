#define SW A3
#define PinY A0
#define PinX A1

#define UP 11
#define LEFT 9
#define RIGHT 12
#define DOWN 10
#define CLICK 3

void setup() {
  pinMode(SW, INPUT);
  pinMode(PinX, INPUT);
  pinMode(PinY, INPUT);

  pinMode(UP, OUTPUT);  
  pinMode(LEFT, OUTPUT);
  pinMode(RIGHT, OUTPUT);  
  pinMode(DOWN, OUTPUT); 
  pinMode(CLICK, OUTPUT);
}

void loop() {
  float x;float y;float sw;int Read;
  x = analogRead(PinX);y = analogRead(PinY);sw = analogRead(SW);
  if(x == 1023)
  {
  digitalWrite(RIGHT, HIGH);
  }
  else
  {
    digitalWrite(RIGHT, LOW);
  }
  if(x == 0)
  {
  digitalWrite(LEFT, HIGH);
  }
  else
  {
    digitalWrite(LEFT, LOW);
  }
  if(y == 0)
  {             
    digitalWrite(UP, HIGH);
  }
  else
  {
    digitalWrite(UP, LOW);
  }
  if(y == 1023)
  {
    digitalWrite(DOWN, HIGH);
  }
  else
  {
    digitalWrite(DOWN, LOW);
  }
  if(sw == 1023 && y < 800)
  {
    digitalWrite(CLICK, HIGH);
  }
  else
  {
    digitalWrite(CLICK, LOW);    
  }
}
