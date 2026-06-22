# Einparkhilfe

## Beschreibung
Simuliert einen Einparksensor. Je näher ein Objekt, desto mehr LEDs leuchten und desto schneller piept der Buzzer.

## Komponenten
- Arduino UNO
- HC-SR04 Ultraschallsensor
- 5x LED + 5x 220Ω Widerstand
- Passiver Buzzer

## Funktionsweise
| Entfernung | LEDs | Buzzer 
|
|---|---|---|
| > 30 cm | 0 LEDs | still |
| 20-30 cm | 1 LED | langsam |
| 15-20 cm | 2 LEDs | langsam |
| 10-15 cm | 3 LEDs | schnell |
| 5-10 cm | 4 LEDs | schnell |
| < 5 cm | 5 LEDs | dauerhaft |

## Was ich gelernt habe
- Ultraschall-Entfernungsmessung (pulseIn)
- Arrays und for-Schleifen für mehrere LEDs
- tone() für variable Buzzer-Frequenz
- Kombination mehrerer Sensoren und Aktoren
