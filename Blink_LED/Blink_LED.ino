
int led13 = 13;

void setup() {
  pinMode(led13, OUTPUT)
}

void loop() {
  digitalWrite(led13, HIGH);
  delay(2000);
  digitalWrite(led13, LOW);
  delay(1000);
}

