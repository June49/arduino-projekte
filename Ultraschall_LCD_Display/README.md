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

Commit changes

Schick Screenshot wenn fertig — dann machen wir Lauflicht!Du hast gesagt: so sollte es aussehen , oder?so sollte es aussehen , oder?11:33Claude hat geantwortet: Genau richtig!Genau richtig! 🎉 Das ist perfekt — RFID-Zugangssystem hat jetzt seine eigene README mit Beschreibung, Komponenten usw.
Jetzt machen wir dasselbe für Ultraschall_LCD_Display:

Geh zurück zur Hauptseite des Repositories
Klick auf den Ordner Ultraschall_LCD_Display
Add file → Create new file → Name: README.md
Kopiere den Inhalt den ich oben geschrieben habe
Commit changes
