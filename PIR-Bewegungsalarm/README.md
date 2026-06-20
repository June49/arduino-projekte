# PIR Bewegungsalarm

## Beschreibung
Erkennt Bewegungen im Raum und löst einen Alarm aus — LED leuchtet und Buzzer piept.

## Komponenten
- Arduino UNO
- HC-SR501 PIR Bewegungssensor
- LED + 220Ω Widerstand
- Passiver Buzzer

## Funktionsweise
1. PIR-Sensor erkennt Infrarotstrahlung (Körperwärme)
2. Bei Bewegung → OUT-Pin wird HIGH
3. LED leuchtet und Buzzer piept für 3 Sekunden
4. Danach wartet das System auf die nächste Bewegung

## Was ich gelernt habe
- PIR-Sensor und Infrarot-Erkennung
- tone() und noTone() für passiven Buzzer
- Haltezeit und Empfindlichkeit einstellen
