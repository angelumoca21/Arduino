void setup() 
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() 
{
  int S0 = digitalRead(A0);
  int S1 = digitalRead(A1);
  int S2 = digitalRead(A2);
  int S3 = digitalRead(A3);
  if(S3 == 0 && S2 == 0 && S1 == 0 && S0 == 0)
  {
    digitalWrite(8,0);
    digitalWrite(7,1);
    digitalWrite(6,0);
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
    digitalWrite(2,0);
  }
  else if(S3 == 0 && S2 == 0 && S1 == 0 && S0 == 1)
  {
    digitalWrite(8,1);
    digitalWrite(7,0);
    digitalWrite(6,0);
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
    digitalWrite(2,0);
  }
}
