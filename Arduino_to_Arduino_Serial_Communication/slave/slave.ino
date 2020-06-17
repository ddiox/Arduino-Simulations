#define led 12

void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available()>0)
  {
    int data = Serial.read();
      if(data=='1')
        {
          digitalWrite(led,HIGH);
        }
      else
        {
          digitalWrite(led,LOW);
        }
        
  }
}
