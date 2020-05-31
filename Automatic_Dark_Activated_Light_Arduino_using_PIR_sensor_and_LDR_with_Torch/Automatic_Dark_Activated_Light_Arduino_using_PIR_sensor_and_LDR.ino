void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  int pirValue = digitalRead(2);
  
  Serial.println(sensorValue);
  Serial.println(pirValue);

  if(pirValue == HIGH && sensorValue<15){
    digitalWrite(9, HIGH);
  }
  else {
     digitalWrite(9, LOW);
  }
  
  delay(1000);        
}
