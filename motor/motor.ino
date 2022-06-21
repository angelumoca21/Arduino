void setup()
{
  pinMode(2, OUTPUT); //IN1
  pinMode(3, OUTPUT); //IN2
}

void loop()
{
  analogWrite(5,50);
  //LADO1 =
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000);

  //STOP
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1000);

  //LADO2 =
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(1000);

  //STOP
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1000);
}
