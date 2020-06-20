void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, OUTPUT);

}

void loop() {
  int sensorVal = digitalRead(7);
  Serial.println(sensorVal);
  
  if (sensorVal == HIGH) {
    digitalWrite(6, LOW);
  } else {
    digitalWrite(6, HIGH);
  }
}
