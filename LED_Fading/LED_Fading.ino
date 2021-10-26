#include<LiquidCrystal.h>
int led=9;
LiquidCrystal lcd(5,4,3,2,1,0);
void setup() {
  pinMode(9,OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ABHAY SINGH");
  lcd.setCursor(0,1);
  lcd.print("  190BTCCSE002");
  delay(100);
  lcd.clear();
}

void loop() {
  int fading;
  lcd.setCursor(0,0);
  lcd.print("Led Intensity");
  for(fading=100;fading<=255;fading+=5)
  {
    lcd.setCursor(0,1);  
    lcd.print("INCREASING     ");
    analogWrite(led,fading);
    delay(5);
  }
  delay(50);
   for(fading=255;fading>=100;fading-=5)
  {
    lcd.setCursor(0,1);
    lcd.print("   DECREASING");
    analogWrite(led,fading);
    delay(5);
  }

}
