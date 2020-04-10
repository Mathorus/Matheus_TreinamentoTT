#define led 13
int intervalo = 100;
double ult = 0;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  if(millis()-ult>=intervalo){
  ult = millis();
  digitalWrite(led,!digitalRead(led));
  }
}