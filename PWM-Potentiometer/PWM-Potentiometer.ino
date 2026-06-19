void setup() {
  Serial.begin(9600); // um Werte zu lesen
  pinMode(9, OUTPUT); // Pin 9 als Ausgang(LED)

}

void loop() {
  // Potentiometer lesen
  int wert = analogRead(A0); // gibt 0 bis 1023
  // Wert umrechnen und LED steuern
  int helligkeit = map(wert, 0, 1023, 0, 255);
  analogWrite(9, helligkeit);
  Serial.println(wert);
  delay(50);
}
