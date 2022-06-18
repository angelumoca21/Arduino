void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int S0 = digitalRead(A0);
  int S1 = digitalRead(A1);
  int S2 = digitalRead(A2);
  int S3 = digitalRead(A3);
  if (S3 == 0 && S2 == 0 && S1 == 0 && S0 == 0)
  {
    digitalWrite(8, 0); //E
    digitalWrite(7, 1); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 0); //C
    Serial.println("0");
  }
  else if (S3 == 0 && S2 == 0 && S1 == 0 && S0 == 1)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 1); //G
    digitalWrite(6, 1); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 1); //A
    digitalWrite(3, 1); //D
    digitalWrite(2, 0); //C
    Serial.println("1");
  }
  else if (S3 == 0 && S2 == 0 && S1 == 1 && S0 == 0)
  {
    digitalWrite(8, 0); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 1); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 1); //C
    Serial.println("2");
  }
  else if (S3 == 0 && S2 == 0 && S1 == 1 && S0 == 1)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 1); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 0); //C
    Serial.println("3");
  }
  else if (S3 == 0 && S2 == 1 && S1 == 0 && S0 == 0)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 1); //A
    digitalWrite(3, 1); //D
    digitalWrite(2, 0); //C
    Serial.println("4");
  }
  else if (S3 == 0 && S2 == 1 && S1 == 0 && S0 == 1)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 1); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 0); //C
    Serial.println("5");
  }
  else if (S3 == 0 && S2 == 1 && S1 == 1 && S0 == 0)
  {
    digitalWrite(8, 0); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 1); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 0); //C
    Serial.println("6");
  }
  else if (S3 == 0 && S2 == 1 && S1 == 1 && S0 == 1)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 1); //G
    digitalWrite(6, 1); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 1); //D
    digitalWrite(2, 0); //C
    Serial.println("7");
  }
  else if (S3 == 1 && S2 == 0 && S1 == 0 && S0 == 0)
  {
    digitalWrite(8, 0); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 0); //C
    Serial.println("8");
  }
  else if (S3 == 1 && S2 == 0 && S1 == 0 && S0 == 1)
  {
    digitalWrite(8, 1); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 0); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 1); //D
    digitalWrite(2, 0); //C
    Serial.println("9");
  }
  else
  {
    digitalWrite(8, 0); //E
    digitalWrite(7, 0); //G
    digitalWrite(6, 0); //F
    digitalWrite(5, 1); //B
    digitalWrite(4, 0); //A
    digitalWrite(3, 0); //D
    digitalWrite(2, 1); //C
    Serial.println("ERROR");
  }
}
