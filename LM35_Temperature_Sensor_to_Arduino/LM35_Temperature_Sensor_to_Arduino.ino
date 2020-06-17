int val;
int tempPin = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(tempPin);
  float mv = (val / 1024.0) * 500;
  float cel = mv / 100;
  float far = (cel / 9) * 5 + 32;
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);
  
}
