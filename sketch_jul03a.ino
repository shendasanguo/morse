#include <Morse.h>
char c[150];
Morse n(13);
int i,k=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    c[k]=Serial.read();
    k++;
    }
  for(i=0;i<k;i++){
    n.changeMorse(c[i],n);
    }
}
