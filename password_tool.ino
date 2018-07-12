#include <Keyboard.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int a = 2;
int ok;
int next;
int i = 0;

void setup() {
  lcd.begin();
  lcd.backlight();
  Keyboard.begin();
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  lcd.setCursor(0, 1);
  lcd.print("1-OK      2-NEXT");
  lcd.setCursor(0, 0);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("                ");
  
  ok = digitalRead(4);
  next = digitalRead(5);

  if(next==HIGH){
    i++;
  }
  
  if(i==0){
    lcd.setCursor(0, 0);
    lcd.print(i);
    lcd.print("/");
    lcd.print(a);
    lcd.print(" - Twitter");
    if (ok==HIGH){
      Keyboard.print("IxSlend");
      Keyboard.press(0xB3);
      Keyboard.releaseAll();
      Keyboard.print("follow plz");
      Keyboard.press(0xB0);
      Keyboard.releaseAll();
      delay(500);
    }
  }else if(i==1){
    lcd.setCursor(0, 0);
    lcd.print(i);
    lcd.print("/");
    lcd.print(a);
    lcd.print(" - Facebook");
    if (ok==HIGH){
      Keyboard.print("no e-mail 4 u@yahoo.com");
      Keyboard.press(0xB3);
      Keyboard.releaseAll();
      Keyboard.print("hehe");
      Keyboard.press(0xB0);
      Keyboard.releaseAll();
      delay(500);
    }
  }else if(i==2){
    lcd.setCursor(0, 0);
    lcd.print(i);
    lcd.print("/");
    lcd.print(a);
    lcd.print(" - Github");
    if (ok==HIGH){
      Keyboard.print("xSlendiX");
      Keyboard.press(0xB3);
      Keyboard.releaseAll();
      Keyboard.print(":]]]]]]]");
      delay(200);
      Keyboard.press(0xB0);
      Keyboard.releaseAll();
      delay(500);
    }
  }else{
    i=0;
  }
  
  
  
  
  delay(500);
}
