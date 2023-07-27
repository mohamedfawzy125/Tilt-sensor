// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
    pinMode(7, INPUT);
  
}

void loop()
{
  if(digitalRead(7)==1){
    digitalWrite(3,1);
  }
  else {
    digitalWrite(3,0);
  }
    

}