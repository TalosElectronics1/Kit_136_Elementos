
#include <IRremote.h> //Libreria para IR
//Declar los pines como variables constantes
const int RECV_PIN = 11;
const int parpadeo = 0;
const int Led = 2;

void Blink(int numero_veces);//Funcion para prender y apagar el led 

//Funciones para la libreria IR
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);//Inicializar el puerto serial a 9600
  pinMode(Led, OUTPUT);//Inicializar el pin 2 como salida
  irrecv.enableIRIn(); // Inicializar receptor IR
}

void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value); //Descomentar esta linea para observar el codigo de cualquier control IR
    irrecv.resume(); // Receive the next value
    
    if (results.value == 16724175) Blink(1);//Si se presiona el boton 1 que parpade 1 vez
    if (results.value == 16718055) Blink(2);
    if (results.value == 16743045) Blink(3);
    if (results.value == 16716015) Blink(4);
    if (results.value == 16726215) Blink(5);
    if (results.value == 16734885) Blink(6);
    if (results.value == 16728765) Blink(7);
    if (results.value == 16730805) Blink(8);
    if (results.value == 16732845) Blink(9);
  }
}

void Blink(int numero_veces)//Cuerpo de la funcion
{
  for (int i = 0; i < numero_veces; i++)
    {
      digitalWrite(Led, HIGH);
      delay(250);
      digitalWrite(Led, LOW);
      delay(250);
    }
}

