typedef struct color{
  int R;
  int G;
  int B;
  int R_pin;
  int G_pin;
  int B_pin;
}color;

#define Red 11
#define Green 10
#define Blue 9

color c;

void write(color c){
  analogWrite(c.R_pin, c.R);
  analogWrite(c.G_pin, c.G);
  analogWrite(c.B_pin, c.B);
}
void setup() {
  // define pins
  c.R_pin = Red;c.G_pin = Green;c.B_pin = Blue;
}

void loop() {
  // white color
  c.R=100;
  c.G=100;
  c.B=100;
  write(c);delay(1000);
  
  // read color
  c.R=100;
  c.G=0;
  c.B=0;
  write(c);delay(1000);

  // green color
  c.R=0;
  c.G=100;
  c.B=0;
  write(c);delay(1000);

  // blue color
  c.R=0;
  c.G=0;
  c.B=100;
  write(c);delay(1000);

  // yellow color
  c.R=100;
  c.G=100;
  c.B=0;
  write(c);delay(1000);
  
  // magenta color
  c.R=100;
  c.G=0;
  c.B=100;
  write(c);delay(1000);
  
  // cyan color
  c.R=0;
  c.G=100;
  c.B=100;
  write(c);delay(1000);  
}
