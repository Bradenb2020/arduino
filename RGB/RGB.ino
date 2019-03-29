void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  delay(500);
}
