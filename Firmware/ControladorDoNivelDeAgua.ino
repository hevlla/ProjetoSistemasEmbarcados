#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
#define Sensor1 7
#define Sensor2 8
#define rele    12
 
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
int sensor1 = 1, sensor2 = 1; 
int nivelinicial = 0;
 
void setup() {
  lcd.begin(16,2);        
  lcd.setBacklight(HIGH); 
  Serial.begin(9600);
 
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(rele,    OUTPUT);
}
 
void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Verificando ...");
  lcd.setCursor(6, 1);
  lcd.print("ERRO");
 
  int sensor1 = digitalRead(Sensor1);
  int sensor2 = digitalRead(Sensor2);
 
  if ((sensor1 == 1) && (sensor2 == 1)) {
    lcd.setCursor(0, 0);
    lcd.print("Bomba Desligada");
    lcd.setCursor(0, 1);
    lcd.print("Nivel: Cheio");
    digitalWrite(rele, LOW);
  }
 
  else if ((sensor1 == 1) && (sensor2 == 0)) {
    lcd.setCursor(0, 0);
    lcd.print("Bomba Desligada");
    lcd.setCursor(0, 1);
    lcd.print("Nivel: Mediano");
  }
   
  else if ((sensor1 == 0) && (sensor2 == 0))) {
    lcd.setCursor(0, 0);
    lcd.print("Bomba Ligada");
    lcd.setCursor(0, 1);
    lcd.print("Nivel: Critico");
    digitalWrite(rele, HIGH);
  }
 
  else {
    lcd.setCursor(0, 1);
    lcd.print("ALERTA - ERRO");
  }
 
  delay(1000);
}
