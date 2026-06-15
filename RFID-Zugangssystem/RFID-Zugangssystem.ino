#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);
int ledg =  7;
int ledr =  6;

void setup() {
  Serial.begin(9600);
  SPI.begin(); // SPI starten
  rfid.PCD_Init(); // RFID Sensor initialisieren
  pinMode(ledg, OUTPUT);
  pinMode(ledr, OUTPUT);

}

void loop() {
  
  bool erlaubt = true;

  // zuerst pruefen, ob eine Karte da ist
   if(!rfid.PICC_IsNewCardPresent()) return;
   if(!rfid.PICC_ReadCardSerial()) return;

   // Dann UID ausgeben
   Serial.print("UID: ");
   for(int i = 0; i < rfid.uid.size; i++){
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
   }
   Serial.println();

  byte autorisiertUID[] = {0xE5, 0x9A, 0xFD, 0x06}; // Ein Array mit der autorisierten UID

  // Vergleichen
  for(int i = 0; i< rfid.uid.size; i++){
    if(rfid.uid.uidByte[i] != autorisiertUID[i]){
      erlaubt = false;
    }
  }
  if(erlaubt){
    Serial.println("Zugang erlaubt!");
    digitalWrite(ledg, HIGH);
    delay(2000);
    digitalWrite(ledg, LOW);
  } else{
    Serial.println("Zugang verweigert!");
    digitalWrite(ledr, HIGH);
    delay(2000);
    digitalWrite(ledr, LOW);
  }
}
