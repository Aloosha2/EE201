// Declares seven different LEDs and how they are going to be used.
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

// Counts down from 9 to 0 in 15 seconds. Utilized the seven-
// segment display to show the numbers as it counts down. 
void loop() {
  //9
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(1500);
  //8
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1500);
  //7
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(1500);
  //6
  digitalWrite(9, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1500);
  //5
  digitalWrite(3, HIGH);
  delay(1500);
  //4
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(9, LOW);
  delay(1500);
  //3
  digitalWrite(10, LOW);
  digitalWrite(2, LOW);
  digitalWrite(7, HIGH);
  delay(1500);
  //2
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1500);
  //1
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(1500);
}
