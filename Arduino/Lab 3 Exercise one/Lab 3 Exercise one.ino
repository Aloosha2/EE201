// Declares the two LEDs and how they are going to be used.
void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
}

// Alternates between which LED lights up. There is a 
// one second delay and only one is lit up at a time.
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
