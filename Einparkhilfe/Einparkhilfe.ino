int echoPin = 6;
int trigPin = 7;
int buzzerPin = 5;
int leds[] = {8, 9, 10, 11, 12};
long dauer;
int entfernung;
int anzahl = 0; // wie viele LEDs leuchten sollen
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  for(int i = 0; i < 5; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  dauer = pulseIn(echoPin, HIGH);
  
  entfernung = dauer * 0.034 / 2;

  if(entfernung < 5) anzahl = 5;
  else if(entfernung < 10 ) anzahl = 4;
  else if(entfernung < 15) anzahl = 3;
  else if(entfernung < 20) anzahl = 2;
  else if(entfernung < 25) anzahl = 1;
  else anzahl = 0;

  // LEDs einschalten
  for (int i = 0; i < 5; i++){
    if(i < anzahl) digitalWrite(leds[i], HIGH);
    else digitalWrite(leds[i], LOW);
  }

  if(entfernung < 5){
    tone(buzzerPin, 1000); // dauerhaft piepen
  }
  else if(entfernung < 15){
    tone(buzzerPin, 1000);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else if(entfernung < 25){
    tone(buzzerPin, 1000);
    delay(300);
    noTone(buzzerPin);
    delay(300);
  }
  else{
    noTone(buzzerPin);
  }
  
  Serial.print("Entfernung: ");
  Serial.print(entfernung);
  Serial.println(" cm");

  delay(100);
}
