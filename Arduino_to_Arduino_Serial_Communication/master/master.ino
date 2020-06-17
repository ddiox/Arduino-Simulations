#define button 2

void setup() 
{
  pinMode(button,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  int nilai = digitalRead(button);
  
  //ditekan
  if(nilai == 0)
    {
      Serial.print("1");     
    }
  else 
    {
      Serial.print("2"); 
    }

    delay(200);

}
