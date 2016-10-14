/*
 * Talos Electronics
 * 29-Septiembre-2016
 */
int LED=2; //Definir el pin que se utilizara para el led
int Tiempo=1000; //1000 ms es igual a 1s

void setup() 
{
  //Inicializar el pin 2 como salida
  pinMode(LED, OUTPUT);
}

void loop() 
{
  digitalWrite(LED, HIGH);   // Encender el LED
  delay(Tiempo);                       // Esperar 1 segundo
  digitalWrite(LED, LOW);    // Apagar el LED
  delay(Tiempo);                       // Esperar 1 segundo
}
