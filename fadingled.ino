int luz = 0;    
int soma = 5;    
void setup()  { 
pinMode(3, OUTPUT);
} 
void loop()  { 
analogWrite(3, luz);    
luz = luz + soma;
if (luz == 0 || luz == 255) {
    soma = -soma ; 
  }     
  
  delay(100);                            
}

