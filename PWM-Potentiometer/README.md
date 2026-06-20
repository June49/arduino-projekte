# PWM LED Helligkeitssteuerung mit Potentiometer

## Beschreibung
Die Helligkeit einer LED wird durch ein Potentiometer stufenlos gesteuert.

## Komponenten
- Arduino UNO
- Potentiometer 10K
- LED + 220Ω Widerstand

## Funktionsweise
1. Potentiometer gibt Spannung zwischen 0V und 5V aus
2. analogRead() wandelt Spannung in Zahl 0-1023 um (10-bit ADC)
3. map() rechnet auf PWM-Bereich 0-255 um
4. analogWrite() erzeugt PWM-Signal → LED leuchtet heller/dunkler

## Was ich gelernt habe
- ADC (Analog-Digital-Converter) Grundlagen
- PWM (Pulse Width Modulation) und Duty Cycle
- map() Funktion für Wertebereich-Umrechnung
- analogRead() und analogWrite()
