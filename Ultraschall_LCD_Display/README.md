# Ultraschall Distanzmesser mit LCD Display

## Beschreibung
Misst Entfernungen mit dem HC-SR04 Ultraschallsensor und zeigt sie live auf einem LCD1602 Display an.

## Komponenten
- Arduino UNO
- HC-SR04 Ultraschallsensor
- LCD1602 Display
- Potentiometer 10K (Kontrasteinstellung)

## Funktionsweise
1. TRIG-Pin sendet kurzen Ultraschallpuls
2. Puls prallt vom Objekt ab
3. ECHO-Pin empfängt zurückkommenden Puls
4. Zeit wird in Entfernung umgerechnet: `Entfernung = Zeit × 0.034 / 2`
5. Ergebnis wird auf LCD angezeigt

## Was ich gelernt habe
- pulseIn() Funktion und Zeitmessung
- Physikalische Berechnung (Schallgeschwindigkeit)
- LCD-Ansteuerung mit LiquidCrystal Library
- Parallele Datenübertragung (D4-D7)
