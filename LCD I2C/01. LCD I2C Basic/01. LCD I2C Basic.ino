#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(6,0);
  lcd.print("HELLO");
  lcd.setCursor(0,1);
  lcd.print(" ERICNURMANSYAH");
  delay(4000);
  lcd.clear();
}
void loop(){
  lcd.setCursor(1,0);
  lcd.print("00000000000000");
  lcd.setCursor(1,1);
  lcd.print("11111111111111");
  delay(1000);
}
