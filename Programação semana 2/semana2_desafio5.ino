
int led = 4;
int sentido = 1;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  
}

void loop()
{
  
  
    if (led == 13 || led == 9 || led == 7 || led == 4 ){
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
      delay(100); 
    }
led = led+sentido;
  if (led==4 || led==13){   
    sentido=-sentido;
  }   
	 
}



