#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

unsigned long previousMillis2 = 0;
unsigned long interval2 = 1000; 
int count2 = 0;

int taskIndex  = 0; 
int taskIndex1 = 0; 
int taskIndex2 = 0; 
int taskIndex3 = 0; 

void setup() {
Serial.begin(115200);
lcd.init();
lcd.backlight();
lcd.setCursor(3, 0);
lcd.print("Tugas Akhir");
lcd.setCursor(0, 1);
lcd.print("Eric Nurmansyah");
delay(2000);
}

void loop() {
String tasks [] = {"Tegangan", "Arus", "Frekuensi","Daya","Energi","Biaya","Suhu","Kelembaban"}; 
String tasks1[] = {"T =", "A =", "F =","D =","E =","Rp=","S =","K ="}; 
String tasks2[] = {"00","00","00","00","00","00","00","00"}; 
String tasks3[] = {" Volt", "  A", " Hz"," Watt"," Kwh",""," C"," %"};

 unsigned long currentMillis2 = millis(); 
  if (currentMillis2 - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis2; 
    count2++;
   if (count2+1) {
    taskIndex++; 
    if (taskIndex >= sizeof(tasks) / sizeof(tasks[0])) {
      taskIndex = 0;
    }
    taskIndex1++; 
    if (taskIndex1 >= sizeof(tasks1) / sizeof(tasks1[0])) {
      taskIndex1 = 0; 
    }
  taskIndex2++;  
    if (taskIndex2 >= sizeof(tasks2) / sizeof(tasks2[0])) {
      taskIndex2 = 0;  
    }
  taskIndex3++; 
    if (taskIndex3 >= sizeof(tasks3) / sizeof(tasks3[0])) {
      taskIndex3 = 0;  
      }
    lcd.clear(); 
    lcd.setCursor(0, 0);
    lcd.print(tasks[taskIndex]);
    lcd.setCursor(0, 1);
    lcd.print(tasks1[taskIndex1]);
    lcd.setCursor(4, 1);
    lcd.print(tasks2[taskIndex2]);
    lcd.setCursor(8, 1);
    lcd.print(tasks3[taskIndex3]);
    lcd.setCursor(13, 0);
    lcd.print(count2);
   }
  }
Serial.println(count2);
}
