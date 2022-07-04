#define RX 10
#define TX 11
#define LED_LISTO 13
#define IN1 3
#define IN2 4
#define IN3 7
#define IN4 8
#define ENA1 5
#define ENA2 6

#include <SoftwareSerial.h>
SoftwareSerial BT(RX, TX);

byte velocidad = 0;
char datoRBL;
char CharRBL = ' ';
char CharParo = ' ';
String reboString = "";

void setup()
{
  Serial.begin(9600);
  BT.begin(38400);
  pinMode(LED_LISTO, OUTPUT);
  digitalWrite(LED_LISTO, 0);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
void loop  ()
{
  if (BT.available())
  {
    while (true)
    {
      datoRBL = BT.read();
      if (datoRBL == '#')
      {
        break;
      }
      if ((datoRBL > 47) && (datoRBL < 123))
      {
        reboString = reboString + datoRBL;
      }
    }
    CharRBL = reboString.charAt(0);
    CharParo = reboString.charAt(1);
    reboString.replace(" ", "");
    if (CharRBL == 'P' && CharParo == '0')
    {
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 0);
      Serial.println("PARAR");
    }
    else if (CharRBL == 'P')
    {
      reboString.replace("P", "");
      velocidad = byte(reboString.toInt());
      analogWrite(ENA1, velocidad);
      analogWrite(ENA2, velocidad);
      Serial.println(velocidad);
    }
    else if (CharRBL == 'L')
    {
      Serial.println("LISTO");
      digitalWrite(LED_LISTO, !(digitalRead(LED_LISTO)));
    }
    else if (CharRBL == 'A')
    {
      digitalWrite(IN1, 1);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 1);
      digitalWrite(IN4, 0);
      Serial.println("ADELANTE");
    }
    else if (CharRBL == 'R')
    {
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 1);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 1);
      Serial.println("ATRAS");
    }
    else if (CharRBL == 'I')
    {
      Serial.println("IZQUIERDA");
    }
    else if (CharRBL == 'D')
    {
      Serial.println("DERECHA");
    }
  }
  reboString = "";
}
