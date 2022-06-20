int potenciometro = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  potenciometro = analogRead(A0);
  Serial.println(potenciometro);
  potenciometro = map(potenciometro,0,1023,0,255);
  analogWrite(3,potenciometro);
  Serial.println(potenciometro);
  delay(200);
}
