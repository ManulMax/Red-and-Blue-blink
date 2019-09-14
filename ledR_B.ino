int ledR=2; // red led to the 2nd digital pin
int ledB=3; // blue led to the 3rd digi pin
void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  //on red led for 100 miliseconds
  digitalWrite(ledR, HIGH);
  delay(100);
  digitalWrite(ledR ,LOW);
  //on blue led for another 100 miliseconds
  digitalWrite(ledB, HIGH);
  delay(100);
  digitalWrite(ledB ,LOW);
}
