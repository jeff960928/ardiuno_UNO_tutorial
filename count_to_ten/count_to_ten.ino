#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// 設置LCD的位址和列數
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // 初始化LCD
  lcd.init();
  // 打開背光
  lcd.backlight();
}

void loop() {
  // 清空LCD顯示
  lcd.clear();
  // 將數字1到10顯示在LCD的第一行
  for (int i = 1; i <= 10; i++) {
    lcd.setCursor(i - 1, 0); // 設置LCD游標位置
    lcd.print(i); // 在當前位置打印數字
    delay(1000); // 延遲一秒
  }
}
