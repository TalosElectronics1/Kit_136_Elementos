/*
 * Talos electronics
 * 30-Septiembre-2016
 */
//Declarar los pines constantes
const int Pin_Boton = 3;     
const int Pin_Led =  2;     

// Variables que seran modificadas
int Estado = 0;        

void setup() 
{
  // Inicializar el Pn_Led como Salida
  pinMode(Pin_Led, OUTPUT);
  //Inicializar el Pin_Boton como Entrada
  pinMode(Pin_Boton, INPUT);
}

void loop() 
{
  //Leer el estado en el que se encuentra el boton
  Estado = digitalRead(Pin_Boton);

  // Si el boton es presionado
  if (Estado == HIGH) 
  {
    // Encender el led
    digitalWrite(Pin_Led, HIGH);
  } 
  //Si el boton no es presionado
  else 
  {
    //Apagar el led
    digitalWrite(Pin_Led, LOW);
  }
}
