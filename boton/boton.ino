int boton = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  boton = digitalRead(2);
  if (boton == HIGH)
  {
    digitalWrite(13, 1);
  }
  else
  {
    digitalWrite(13, 0);
  }
}
