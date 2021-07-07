// use test to define each pin led
// not compeleted

#define U 5
#define UL 4
#define M 6
#define Dot 7

#define D 9
#define UR 10
#define DL 0
#define DR 0


void print_num(int num)
{
  
}

#define test 4
void setup() {
  pinMode(test, OUTPUT);
  pinMode(U, OUTPUT);pinMode(D, OUTPUT);pinMode(M, OUTPUT);pinMode(Dot, OUTPUT);
  pinMode(UL, OUTPUT);pinMode(DL, OUTPUT);pinMode(UR, OUTPUT);pinMode(DR, OUTPUT);
  digitalWrite(U,1);
  digitalWrite(D,1);
  digitalWrite(M,1);
  digitalWrite(UL,1);
}

void loop() {
    digitalWrite(test,1);
}
