


int CLOCK_1 = 12;
int LATCH_1 = 11;
int DATA_1 = 10;

int CLOCK_2 = 9;
int LATCH_2 = 8;
int DATA_2 = 7;


const byte numeros[8] = 
{
  0b00000001,
  0b00000010,
  0b00000100,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
};

const byte numeros_2[8] = 
{
  0b11111110,
  0b11111101,
  0b11111011,
  0b11110111,
  0b11101111,
  0b11011111,
  0b10111111,
  0b01111111
};

void setup() 
{
  pinMode(LATCH_1, OUTPUT);
  pinMode(CLOCK_1, OUTPUT);
  pinMode(DATA_1, OUTPUT);

  pinMode(LATCH_2, OUTPUT);
  pinMode(CLOCK_2, OUTPUT);
  pinMode(DATA_2, OUTPUT);

}

void loop()
{
  
  for (int i = 0; i < 8; i++)
  {
     digitalWrite(LATCH_2, LOW);
     shiftOut(DATA_2, CLOCK_2, LSBFIRST, numeros_2[i]);
     digitalWrite(LATCH_2, HIGH);
   
    for (int j = 0; j < 8; j++)
    {
      
      digitalWrite(LATCH_1, LOW);
      shiftOut(DATA_1, CLOCK_1, LSBFIRST, numeros[j]);
      digitalWrite(LATCH_1, HIGH);
      delay(500);
    }
  }

}
