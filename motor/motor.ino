#define IN1 2
#define IN2 3
#define IN3 7
#define IN4 8
#define VelM1 5
#define VelM2 6

int velocidad = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT); 
  pinMode(IN2, OUTPUT); 
  pinMode(IN3, OUTPUT); 
  pinMode(IN4, OUTPUT); 
}

void loop()
{
  velocidad = analogRead(A0);
  velocidad = map(velocidad,0,1023,0,255);
  Serial.println(velocidad);
  analogWrite(VelM1, velocidad);
  analogWrite(VelM2, velocidad);
  //LADO1 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(1000);
  //STOP
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);
  //LADO2 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1000);
  //STOP
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);
}
