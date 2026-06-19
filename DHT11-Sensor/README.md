# DHT11 Temperatur- und Luftfeuchtigkeitssensor

## Beschreibung
Liest Temperatur und Luftfeuchtigkeit der Umgebung aus und gibt die Werte im Serial Monitor aus.

## Komponenten
- Arduino UNO
- DHT11 Sensor

## Funktionsweise
1. DHT11 Library wird initialisiert
2. Alle 2 Sekunden werden Temperatur und Luftfeuchtigkeit ausgelesen
3. Fehlerbehandlung falls der Sensor keine gültigen Daten liefert
4. Werte werden im Serial Monitor angezeigt

## Was ich gelernt habe
- Einbinden und Nutzen von Arduino Libraries
- Umgang mit float-Variablen
- Fehlerbehandlung mit isnan()
- Sensor-Timing (Wartezeiten zwischen Messungen)
