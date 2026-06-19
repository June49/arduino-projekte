# LED Lauflicht mit Taster

## Beschreibung
5 LEDs leuchten nacheinander wie ein Lauflicht. Ein Taster startet und stoppt die Animation.

## Komponenten
- Arduino UNO
- 5x LED + 5x 220Ω Widerstand
- 1x Taster

## Funktionsweise
1. Taster wird gedrückt → Lauflicht startet/stoppt (Umschalter)
2. Im laufenden Zustand: jede LED leuchtet 200ms nacheinander auf
3. Taster kann das Lauflicht jederzeit unterbrechen

## Was ich gelernt habe
- Arrays zur Verwaltung mehrerer Pins
- for-Schleifen statt wiederholtem Code
- bool Variable für Zustandsverwaltung
- Logik-Negation (!laufen) für Umschalter
