#define led1 4
#define led2 8
#define led3 13
#define botao 2
int contador = 0;
void setup()
{  
  pinMode(led3, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{

  if(digitalRead(botao)==HIGH){
  contador++;
  
    switch(contador){  
    case 1:
        digitalWrite(led3, LOW); 
        digitalWrite(led2, LOW);
      	digitalWrite(led1, HIGH);
      
      break;
     case 2:
        digitalWrite(led3, LOW); 
        digitalWrite(led2, HIGH);
      	digitalWrite(led1, LOW);
   
      break; 
      case 3:
        digitalWrite(led3, LOW); 
        digitalWrite(led2, HIGH);
      	digitalWrite(led1, HIGH);
       
      break; 
      case 4:
        digitalWrite(led3, HIGH); 
        digitalWrite(led2, LOW);
      	digitalWrite(led1, LOW);
     
      break; 
        case 5:
        digitalWrite(led3, HIGH); 
        digitalWrite(led2, LOW);
      	digitalWrite(led1, HIGH);
      
      break;
      case 6:
        digitalWrite(led3, HIGH); 
        digitalWrite(led2, HIGH);
      	digitalWrite(led1, LOW);
     
      break;
       case 7:
        digitalWrite(led3, HIGH); 
        digitalWrite(led2, HIGH);
      	digitalWrite(led1, HIGH);
      
      break;
      default:
      	digitalWrite(led3, LOW); 
        digitalWrite(led2, LOW);
      	digitalWrite(led1, LOW);
      contador=0;
      
      break;
    }
  }  
  while (digitalRead(botao)==HIGH){

  }
  delay(100);
}