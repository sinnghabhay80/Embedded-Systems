#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,8,9,10,11);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.print("Welcome ");
delay(100);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:

lcd.setCursor(0,1);
lcd.print("hi!");
delay(100);
lcd.setCursor(0,0);
lcd.print("My Name is Abhay.");
delay(100);
lcd.clear();
}
