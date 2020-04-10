#define botao 2
#define led 13
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  if(digitalRead(botao)== HIGH) {
  digitalWrite(13, HIGH);
  delay(1000);
  }
  else{
  digitalWrite(13, LOW);
  delay(1000);
  }
}