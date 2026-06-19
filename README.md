# Arduino Projekte

Sammlung von Embedded-Systems Projekten im Rahmen meines Studiums der Elektro- und Informationstechnik.

## Projekte

### 🔴 RFID Zugangssystem
Zugangskontrollsystem mit RC522 RFID-Sensor. Autorisierte Karten leuchten grün, unbekannte rot.
**Konzepte:** SPI-Kommunikation, Array-Vergleich, UID-Verarbeitung

### 📏 Ultraschall Distanzmesser mit LCD
Misst Entfernungen mit HC-SR04 und zeigt sie auf LCD1602 Display an.
**Konzepte:** pulseIn(), Zeit-zu-Distanz Berechnung, LCD-Ansteuerung

### 💡 LED Lauflicht mit Taster
5 LEDs leuchten nacheinander, Taster startet/stoppt das Lauflicht.
**Konzepte:** Arrays, for-Schleifen, INPUT_PULLUP, Zustandsverwaltung

### 🌡️ DHT11 Sensor
Liest Temperatur und Luftfeuchtigkeit aus und zeigt sie im Serial Monitor an.
**Konzepte:** Sensor-Libraries, Fehlerbehandlung mit isnan()

### 🔘 Taster-LED
LED wird durch Tasterdruck gesteuert.
**Konzepte:** digitalRead(), INPUT_PULLUP, active-low Logik

### ✨ LED-Blink
Erstes Projekt — eingebaute LED blinken lassen.
**Konzepte:** digitalWrite(), delay(), Grundlagen von setup()/loop()

## Hardware
ELEGOO UNO R3 Starter Kit

## Technologien
C/C++, Arduino IDE, Git/GitHub
