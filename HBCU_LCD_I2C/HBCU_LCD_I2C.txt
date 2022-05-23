/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 * Courtesy: @blackinrobotics
 */
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  
void setup() {
  // put your setup code here, to run once:
  lcd.backlight();
  lcd.init();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  delay(1000); 
}

void loop() {
  // put your main code here, to run repeatedly:
    lcd.clear();
    lcd.setCursor(0, 1); 
    lcd.print("LCD Display");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("HBCU WORKSHOP");
    delay(1000);
}
