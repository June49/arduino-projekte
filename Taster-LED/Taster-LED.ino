int tasterPin = 2;   // Taster an Pin 2
int ledPin = 13;     // LED an Pin 13

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(tasterPin, INPUT_PULLUP);  // Pin 2 als Eingang
}

void loop() {
  int zustand = digitalRead(2); // Taster lesen

  if (zustand == LOW) {       
    digitalWrite(ledPin, HIGH); // LED an
  } else {
    digitalWrite(ledPin, LOW);  // LED aus
  }
}
