// Still not working

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up LCD's numbers of columns and rows
  lcd.begin(16,2 );
  lcd.print("1");
}

void loop() {
    // set the curser to column 0, line 1
    lcd.setCursor(0,1);
    // print the number of seconds since reset
    lcd.print("1");
}
