int tasterPin = 2;   // Taster an Pin 2
int ledPin = 13;     // LED an Pin 13

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);  // Pin 2 als Eingang
}

void loop() {
  int zustand = digitalRead(2); // Taster lesen

  if (zustand == LOW) {       
    digitalWrite(13, HIGH); // LED an
  } else {
    digitalWrite(13, LOW);  // LED aus
  }
}