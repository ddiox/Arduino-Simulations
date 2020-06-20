void setup() {
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); 
}

void loop() {
  int val1 = digitalRead(6);
  int val2 = digitalRead(7);

  if (val1 == HIGH) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }
  
  if (val2 == HIGH) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }
}
