# Taster-LED

## Beschreibung
Eine LED wird durch einen Taster gesteuert — solange der Taster gedrückt ist, leuchtet die LED.

## Komponenten
- Arduino UNO
- 1x LED + 220Ω Widerstand
- 1x Taster

## Funktionsweise
1. Taster wird mit INPUT_PULLUP betrieben (interner Widerstand)
2. Im Ruhezustand liest der Pin HIGH
3. Beim Drücken wird der Pin auf GND gezogen → liest LOW
4. LED schaltet sich entsprechend ein oder aus

## Was ich gelernt habe
- digitalRead() für Sensor-Input
- INPUT_PULLUP und active-low Logik
- Grundprinzip von Schaltern auf dem Steckbrett
