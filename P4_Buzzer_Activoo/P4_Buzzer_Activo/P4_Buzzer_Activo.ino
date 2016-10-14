/*
 * Talos Electronics
 * 3 de octubre de 2016
 */
 //Declaracion de variables constantes
const int Buzzer=2;
const int Tiempo_Alto=500;
const int Tiempo_Bajo=1000;

void setup() 
{
  // Inicializar el pin 2 como salida
  pinMode(Buzzer,OUTPUT);
}

void loop() 
{
  
  digitalWrite(Buzzer,HIGH);//Encender el buzzer
  delay(Tiempo_Alto);//Esperar el tiempo programado
  digitalWrite(Buzzer,LOW);//Apagar el buzzer
  delay(Tiempo_Bajo);//Esperar el tiempo programado
}



