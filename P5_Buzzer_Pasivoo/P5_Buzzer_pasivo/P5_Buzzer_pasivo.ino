const int pinBuzzer = 3;
 
void setup() 
{
}
 
void loop() 
{
  //generar tono de 440Hz durante 1000 ms
  tone(pinBuzzer, 440);
  delay(1000);
 
  //detener tono durante 500ms  
  noTone(pinBuzzer);
  delay(500);
 
  //generar tono de 523Hz durante 500ms, y detenerlo durante 500ms.
  tone(pinBuzzer, 523, 300);
  delay(500);
}

//Activa un tono de frecuencia determinada en un pin dado
tone(pin, frecuencia); 
//Detiene el tono en el pin
noTone(pin);           


