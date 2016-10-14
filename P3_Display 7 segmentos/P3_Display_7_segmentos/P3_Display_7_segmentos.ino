/*
 * Talos Electronics
 * 3 de octubre de 2016
 */

//Declaracion variables constantes
const int a = 2;  // segmentos del display
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

//Declaracion de variables que seran modificadas
int Numero=0;
void setup() 
{
  //Inicializar los segmentos como salidas
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() 
{
   
  switch(Numero)
  {
    //Mostrar un 0 en el display 
    case 0:
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break;

    //Mostrar un 1 en el display 
    case 1:
    digitalWrite(a, LOW);  // 1
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;

    //Mostrar un 2 en el display 
    case 2:
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 3 en el display 
    case 3:
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 4 en el display 
    case 4:
    digitalWrite(a, LOW);  
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 5 en el display 
    case 5:
    digitalWrite(a, HIGH); 
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 6 en el display 
    case 6:
    digitalWrite(a, HIGH);  
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 7 en el display 
    case 7:
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
  
    //Mostrar un 8 en el display 
    case 8:
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  
    //Mostrar un 9 en el display 
    case 9:
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
  
  }
  delay(1000);//Esperar 1 segundo
  Numero++;//incrementar la cuenta

  //Resetear el contador cuando llegue a 10
  if(Numero==10)
  {
    Numero=0;
  }

}
