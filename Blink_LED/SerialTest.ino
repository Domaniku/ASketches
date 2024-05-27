void setup() {
  // baud rate: rate at which data is sent
Serial.begin(9600);
}

void loop() {

   // Checks if serial buffer is empty or not: If not empty? true : false
  if(Serial.available()) {
     Serial.println("Enter a value");
    char ch = Serial.read();
    Serial.println(ch);
    if(ch >= '0' && ch <= '7') {
       Serial.print(ch);
    } else {
      Serial.println("No Data! Can't recongize Input");
    }
  }
}


