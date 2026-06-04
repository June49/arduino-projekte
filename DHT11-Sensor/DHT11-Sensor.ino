#include "DHT.h"

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float luftfeuchtigkeit = dht.readHumidity();
  float temperatur = dht.readTemperature();

  if (isnan(luftfeuchtigkeit) || isnan(temperatur)) {
    Serial.println("Fehler beim Lesen!");
    return;
  }

  Serial.print("Luftfeuchtigkeit: ");
  Serial.print(luftfeuchtigkeit);
  Serial.println(" %");
  Serial.print("Temperatur: ");
  Serial.print(temperatur);
  Serial.println(" °C");
}