
int red = 1;
int blue = 2;
int green = 3;

void setup() {
  
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
  
}


void loop() {
  
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(blue, High);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);

}
