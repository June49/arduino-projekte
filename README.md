# arduino-projekte
# RFID Zugangssystem

## Beschreibung
Zugangskontrollsystem mit Arduino UNO und RC522 RFID-Sensor.
Autorisierte Karten leuchten grün, unbekannte Karten rot.

## Komponenten
- Arduino UNO
- RC522 RFID-Sensor
- Grüne LED + 220Ω Widerstand
- Rote LED + 220Ω Widerstand

## Kommunikationsprotokoll
SPI (Serial Peripheral Interface)

## Funktionsweise
1. RC522 sendet elektromagnetisches Feld
2. RFID-Karte antwortet mit ihrer UID
3. Arduino vergleicht UID mit autorisierter UID
4. Grüne LED = Zugang erlaubt / Rote LED = verweigert

## Was ich gelernt habe
- SPI Kommunikationsprotokoll
- RFID Technologie
- UID Vergleich mit Arrays
- Zugangskontrolllogik
