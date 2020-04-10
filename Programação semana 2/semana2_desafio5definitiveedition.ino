int leds[] = {13, 9, 7, 4};
int contador = 1;
int sentido = 0;
int soma = 1;
void setup(){
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  
}

void loop()
{
  
  while (contador<=4){
    
      digitalWrite(leds[sentido], HIGH);
      delay(500);
      digitalWrite(leds[sentido],LOW);
      delay(500); 
      contador++;
      sentido = sentido+soma;
  }
  soma = -soma;
  contador =0;
  
}



