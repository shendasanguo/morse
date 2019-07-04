void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case 'f':
          forward();
          digitalWrite(12, HIGH);
          delay(1000); 
          digitalWrite(12, LOW);
          delay(1000);
          break;
      case 'b':
          backward();
          digitalWrite(8, HIGH);
          delay(1000); 
          digitalWrite(8, LOW);
          delay(1000);
          break;
      case 'l':
          left();
          digitalWrite(3, HIGH);
          delay(1000); 
          digitalWrite(3, LOW);
          delay(1000);
          break;
      case 's':
          stop();
          digitalWrite(3, HIGH);
          delay(1000); 
          digitalWrite(3, LOW);
          delay(1000);
          digitalWrite(4, HIGH);
          delay(1000); 
          digitalWrite(4, LOW);
          delay(1000);
          break;
      case 'r':
          right();
          digitalWrite(4, HIGH);
          delay(1000); 
          digitalWrite(4, LOW);
          delay(1000);
          break;
      default:
          break;
    }
  }
}
void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}
void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}
void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}
