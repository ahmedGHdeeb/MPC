y#include <LiquidCrystal.h>

// LiquidCrystal display with:
// rs on pin 12
// rw on pin 11
// enable on pin 10
// d4-7 on pins 5-2
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
void setup() {
  Serial.begin(9600);
  lcd.begin(2, 20);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Evil Genius");
  lcd.setCursor(0,1);
  lcd.print("Rules");
  
}

void loop() {
  // it is writing a wierd letter with the letter entered with serial
  if(Serial.available())
  {
    byte ch = Serial.read();
    if(char(ch) == '#')
    {
      lcd.clear();
    }
    else if(char(ch) == '\\')
    {
      lcd.setCursor(0,1); 
    }
        else if(char(ch) == '/')
    {
      lcd.setCursor(0,0); 
    }
    else
    {
      lcd.print(char(ch));
      Serial.print(char(ch));
    }   
  }
}
