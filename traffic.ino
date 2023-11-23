// C++ code Star-Lord

int delayG = 5000;
int delayY = 2000;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  //Green
  digitalWrite(3,HIGH);
  delay(delayG);
  digitalWrite(3,LOW);
  
  //Yellow
  digitalWrite(4,HIGH);
  delay(delayY);
  digitalWrite(4,LOW);
  
  //Red
  digitalWrite(5,HIGH);
  delay(delayG);
  digitalWrite(5,LOW);
   
}