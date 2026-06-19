#define pirPin 2
#define ledPin 8
#define buzzerPin 6

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int motion = digitalRead(pirPin);
  
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
    Serial.println("Bewegung erkannt!");
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
    Serial.println("Keine Bewegung");
  }
  delay(100);
}
