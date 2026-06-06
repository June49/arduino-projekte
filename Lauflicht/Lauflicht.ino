int leds[] = {8, 9, 10, 11, 12}; // Array mit den LED-Pins, um leds[0] = 8 zu haben usw
int tasterPin = 2;
bool laufen = false;

void setup() {
  // setzt jeden LED-Pin als OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) {
    laufen = !laufen;  // umschalten
    delay(300);        // Entprellung
  }

  if (laufen) {
    for (int i = 0; i < 5; i++) {
      if (digitalRead(2) == LOW) {
        laufen = !laufen;
        delay(300);
        break;
      }
      digitalWrite(leds[i], HIGH); //LED i an
      delay(200);                  // 200ms warten
      digitalWrite(leds[i], LOW); // LED i aus
    }
  }
}