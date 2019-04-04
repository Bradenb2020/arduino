void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(100);
  if (sensorValue <= 300) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  if (sensorValue <= 250) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }
  if (sensorValue <= 200) {
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }
  if (sensorValue <= 150) {
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);
  }
}
