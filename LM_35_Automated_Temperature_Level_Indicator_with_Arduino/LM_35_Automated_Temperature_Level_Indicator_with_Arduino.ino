int val;
int tempPin = 1;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(tempPin);
  float mv = (val / 1024.0) * 500;
  float cel = mv / 100;
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();

  if(cel<=30){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  else if(cel>30){
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
  delay(10);
}
