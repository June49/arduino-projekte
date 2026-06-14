+#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trigpin = 9;
int echopin = 8;
long dauer;
int entfernung;

void setup() {
  Serial.begin(9600); // fuer Serial Monitor
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  lcd.begin(16, 2); // 16 Spalte, 2 Reihen

}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigpin, LOW);

  dauer = pulseIn(echopin, HIGH); // pulseIn misst wie lange ein Pin auf HIGH bleibt, in Mikrosekunden 

  entfernung = dauer * 0.034 / 2; // Schall bewegt sich mit 0.034 cm pro Mikrosekunde. Geteilt durch 2 , weil der Puls hin und zurueckt geht
  Serial.print(entfernung);
  Serial.println(" cm");
  delay(500);

  lcd.setCursor(0, 0); // Spalte 0, Reihe 0
  lcd.print("Entfernung");
  lcd.setCursor(0, 1); // Spalte 0, Reihe 1
  lcd.print(entfernung);
  lcd.print(" cm");
  

}
