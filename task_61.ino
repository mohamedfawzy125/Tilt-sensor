// C++ code
//
void setup()
{
  pinMode(4, INPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
  if(digitalRead(4)==1){
    digitalWrite(9,1);
  }
  else{
    digitalWrite(9,0);
  }
    
 
}