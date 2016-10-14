//Declaracion de variables constantes
const int Sensor = 2;
const int Led = 3;

//Declaracion de variables
int  Valor_sensor_anterior= 0;
int Valor_sensor_actual = 0;
long Retardo = 0;
int Tiempo = 50;
 
void setup() 
{
    //Inicializar el pin 2 como entrada
    pinMode(Sensor, INPUT);
    //Activamos la resistencia interna PULL UP
    digitalWrite(Sensor, HIGH);  
    //Inicializar el pin 3 como salida
    pinMode(Led, OUTPUT);
}
 
void loop() 
{
    Valor_sensor_actual = digitalRead(Sensor);//Leer el valor del sensor
    if (Valor_sensor_anterior != Valor_sensor_actual) 
    {
        Retardo = millis();
        Valor_sensor_anterior = Valor_sensor_actual;
    }
    if (millis() - Retardo < Tiempo) 
    {
        digitalWrite(Led, HIGH);
    }
    else 
    {
        digitalWrite(Led, LOW);
    }
}
