void setup() {
  pinMode(13, OUTPUT);  // Pin 13 als AUSGANG definieren
 
}

void loop() {
  digitalWrite(13, HIGH);  // Pin 13 auf 5V setzen → LED an
  delay(1000);             // 1000 Millisekunden warten
  digitalWrite(13, LOW);   // Pin 13 auf 0V setzen → LED aus
  delay(1000);
}