#include<SoftwareSerial.h>
#define IN1 2
#define IN2 3
#define velocidad 5

SoftwareSerial miBT(10, 11);
char dato = 0;

void setup()
{
  miBT.begin(38400);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop()
{
  analogWrite(velocidad, 40);
  if (miBT.available())
  {
    dato = miBT.read();
    if (dato == '1') //lado1
    {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(2000);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    else if (dato == '2') //lado2
    {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      delay(2000);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    else
    {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
  }
}
