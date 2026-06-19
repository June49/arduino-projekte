int tasterPin = 2;   // Taster an Pin 2
int ledPin = 13;     // LED an Pin 13

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(tasterpin, INPUT_PULLUP);  // Pin 2 als Eingang
}

void loop() {
  int zustand = digitalRead(2); // Taster lesen

  if (zustand == LOW) {       
    digitalWrite(ledpin, HIGH); // LED an
  } else {
    digitalWrite(ledpin, LOW);  // LED aus
  }
}
