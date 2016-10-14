/*
 * Talos Electronics
 */
const int LM35 = A0;
const int R=4;
const int G=3;
const int B=2;
const int Temperatura_Minima=20;
const int Temperatura_Maxima=25;

float Temperatura;
void setup () 
{
  Serial.begin(9600);//Inicializar puerto serial
  pinMode(R,OUTPUT);//Inicializar el pin 4 como salida
  pinMode(G,OUTPUT);//Inicializar el pin 3 como salida
  pinMode(B,OUTPUT);//Inicializar el pin 2 como salida
  //El led inicie apagado
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
}
void loop() 
{
  Temperatura = analogRead(LM35);//Leer la entrada analogica
  //Calcular la temperatura
  Temperatura = 5.0*Temperatura*100.0/1024.0;
  //Mostrar la temperatura en el monitor Serial
  Serial.print(Temperatura);
  Serial.println(" ºC");

  //Codicion para que encienda el led de color Verde
  if(Temperatura>Temperatura_Minima&&Temperatura<Temperatura_Maxima)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(B,LOW);
  }

  //Condicion para que encienda el led de color Azul
  if(Temperatura<=Temperatura_Minima)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }

  //Condicion para que encienda el led de color Rojo
  if(Temperatura>=Temperatura_Maxima)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }
  delay(500);
}
