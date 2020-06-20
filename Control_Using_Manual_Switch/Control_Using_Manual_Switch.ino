
int x1,x2,x3;
void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  int val1=digitalRead(2);
  int Reset=digitalRead(5);

if(val1==LOW){
  x1=true;}
  while(x1){
     digitalWrite(8,HIGH);
     int val2=digitalRead(3);
     Reset=digitalRead(5);
     if (val2==LOW){
        x1=false;
        x2=true;
        }
          if (Reset==LOW){
              digitalWrite(8,LOW);
              x1=false;}
             }
             
        while(x2){
            digitalWrite(9,HIGH);
            int val3=digitalRead(4);
            Reset=digitalRead(5);
            if (val3==LOW){
                x2=false;
                x3=true;}
                 if (Reset==LOW){
                    digitalWrite(8,LOW);
                    digitalWrite(9,LOW);
                    x2=false;}
                  } 
                        
                  while(x3){
                   digitalWrite(10,HIGH);
                   Reset=digitalRead(5);
                   if (Reset==LOW){
                      digitalWrite(8,LOW);
                      digitalWrite(9,LOW);
                      digitalWrite(10,LOW);
                      x3=false;}
                  } 
}
