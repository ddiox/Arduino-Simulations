void setup() {
  for(int x=2;x<=7;x++) {
    pinMode(x, OUTPUT);
  }
}

void loop() {
  for (int y=2;y<=7;y++){
    digitalWrite(y, HIGH);   
    delay(50);   
  }
  for (int z=2;z<=7;z++){
    digitalWrite(z, LOW);   
    delay(10);   
  }
} 
