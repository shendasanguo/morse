#include <Morse.h>
Morse m(13);
char income;
int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    income=Serial.read();
    m.changeMorse(Code[i],m);
    }
}
