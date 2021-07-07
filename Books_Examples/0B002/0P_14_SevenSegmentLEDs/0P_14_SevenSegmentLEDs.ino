#define U 2
#define D 3
#define UL 4
#define UR 5
#define M 6
#define DL 7
#define DR 8

void setup() {
  pinMode(U, OUTPUT);pinMode(D, OUTPUT);pinMode(UL, OUTPUT);pinMode(UR, OUTPUT);pinMode(M, OUTPUT);pinMode(DL, OUTPUT);pinMode(DR, OUTPUT);
}

void loop() {
  digitalWrite(U, HIGH);
}
