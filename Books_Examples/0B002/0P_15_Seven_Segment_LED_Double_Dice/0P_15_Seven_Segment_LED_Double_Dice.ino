#define DL 2
#define D 3
#define P 4
#define DR 5
#define M 6
#define G3 7
#define G2 8
#define UL 9
#define U 10
#define G1 11
#define UR 12
#define G4 13

void write_num(int num, int pos)
{
  if(pos == 1) {digitalWrite(G1, 0); digitalWrite(G2, 1); digitalWrite(G3, 1); digitalWrite(G4, 1);}
  if(pos == 2) {digitalWrite(G1, 1); digitalWrite(G2, 0); digitalWrite(G3, 1); digitalWrite(G4, 1);}
  if(pos == 3) {digitalWrite(G1, 1); digitalWrite(G2, 1); digitalWrite(G3, 0); digitalWrite(G4, 1);}
  if(pos == 4) {digitalWrite(G1, 1); digitalWrite(G2, 1); digitalWrite(G3, 1); digitalWrite(G4, 0);}

  if(num == 1)
  {
    digitalWrite(U, 0);digitalWrite(M,0);digitalWrite(D,0);digitalWrite(UL,1);digitalWrite(UR,0);analogWrite(DL,255);digitalWrite(DR,0);digitalWrite(P,0);
  }
  if(num == 2)
  {
    digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,0);analogWrite(DL,255);digitalWrite(UR,1);digitalWrite(DR,0);digitalWrite(P,0);
  }
  if(num == 3)
  {
    digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,0);digitalWrite(UR,1);analogWrite(DL,0);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 4)
  {
    digitalWrite(U, 0);digitalWrite(M,1);digitalWrite(D,0);digitalWrite(UL,1);digitalWrite(UR,1);analogWrite(DL,0);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 5)
  {
      digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,1);digitalWrite(UR,0);analogWrite(DL,0);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 6)
  {
    digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,1);digitalWrite(UR,0);analogWrite(DL,255);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 7)
  {
    digitalWrite(U, 1);digitalWrite(M,0);digitalWrite(D,0);digitalWrite(UL,0);digitalWrite(UR,1);analogWrite(DL,0);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 8)
  {
    digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,1);digitalWrite(UR,1);analogWrite(DL,255);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 9)
  {
    digitalWrite(U, 1);digitalWrite(M,1);digitalWrite(D,1);digitalWrite(UL,1);digitalWrite(UR,1);analogWrite(DL,0);analogWrite(DR,255);digitalWrite(P,0);
  }
    if(num == 0)
  {
    digitalWrite(U, 1);digitalWrite(M,0);digitalWrite(D,1);digitalWrite(UL,1);digitalWrite(UR,1);analogWrite(DL,255);analogWrite(DR,255);digitalWrite(P,0);
  }
}

void setup() {
  pinMode(D, OUTPUT);pinMode(M, OUTPUT);pinMode(U, OUTPUT);pinMode(P, OUTPUT);pinMode(UL, OUTPUT);pinMode(UR, OUTPUT);pinMode(UL, OUTPUT);pinMode(UR, OUTPUT);
  pinMode(G1, OUTPUT);pinMode(G2, OUTPUT);pinMode(G3, OUTPUT);pinMode(G4, OUTPUT);
}

void loop() {
  //digitalWrite(G1, 0); digitalWrite(G2, 1); digitalWrite(G3, 1); digitalWrite(G4, 1);
  //digitalWrite(DL, 255);
  //digitalWrite(U,1);digitalWrite(M,0);digitalWrite(D,0);digitalWrite(DL,0);digitalWrite(UR,0);digitalWrite(DL,0);digitalWrite(P,0);
  
  int i; int j;
  for(i = 1; i < 5; i++)
  {
    for(j = 0; j < 10; j++)
    {
      write_num(j, i); 
      delay(200);
    }
  }
  
  //write_num(4, 1);
}
