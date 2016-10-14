/*
 * Talos Electronics
 */
 //Definir pines constantes
const int LDR= A0;
const int LED=2;

//Definicion de variables 
int Valor_LDR;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);//Inicializar el pin 2 como Salida
  Serial.begin(9600);
}

void loop() 
{
  
  Valor_LDR= analogRead(LDR);

  if(Valor_LDR<500)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
