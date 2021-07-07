// steal not working
int keypad_pins[] = {2, 3, 4, 5, 6, 7, 8};
// 2,3,4 output || 5,6,7,8 input
char get_char(){
  char ch = '\0';
  while(!ch){
     digitalWrite(2, HIGH);
     if(analogRead(A0) == 1023)
     {
      return '2';
     }
     if(analogRead(A1) == 1023)
     {
      return '8';
     }
     if(analogRead(A2) == 1023)
     {
      return '0';
     }
     if(analogRead(A3) == 1023)
     {
      return '5';
     }
     digitalWrite(2, LOW);
  }  
}
void setup() {
  pinMode(2, OUTPUT);pinMode(3, OUTPUT);pinMode(4, OUTPUT);
  pinMode(A0, INPUT);pinMode(A1, INPUT);pinMode(A2, INPUT);pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
 Serial.println(get_char());
 //Serial.println(analogRead(A2));
 
}
