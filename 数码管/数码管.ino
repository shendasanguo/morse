void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
  char income;
  income=Serial.read();
  income=income-'0';
  Serial.println(income,DEC);
  digitalWrite(6,LOW);
  delay(10);
  digitalWrite(2,income&0x1);
  digitalWrite(3,(income>>3)&0x1);
  digitalWrite(4,(income>>2)&0x1);
  digitalWrite(5,(income>>1)&0x1);
  /*digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);*/
  delay(10);
  digitalWrite(6,HIGH);
  delay(10);
  }
}
