#define potencia A0
#define led 9
int pot = 0;
int luz = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(potencia, INPUT);
}

void loop()
{
  pot = analogRead(potencia);
  luz = map(pot, 0, 1023, 0, 255);
  digitalWrite(led, luz);

 
}