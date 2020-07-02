unsigned long tiempo=60;//120 -- 60
void setup() 
{
  for(int i =2; i<=9; i++)
  {  
   pinMode(i,OUTPUT); //declaración de pines como salida
  }
}

void loop() 
{
      for(int i =2; i<=9; i++)
      { 
        digitalWrite(i,HIGH); //enciende led respectivo
        delay(tiempo);        //tiempo encendido
        digitalWrite(i,LOW);  //apaga led respectivo
      }
    
       for(int i =8; i>=3; i--)
      { 
        digitalWrite(i,HIGH); //enciende led respectivo
        delay(tiempo);        //tiempo encendido
        digitalWrite(i,LOW);  //apaga led respectivo
      }
  
}
