#include <Arduino.h>
int vddr;
int vddl;
int Sex(int a,int b,int c,int d){
  analogWrite(5,a);
  analogWrite(6,b);
  analogWrite(10,c);
  analogWrite(11,d);
}

void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop() {
  vddr = int(analogRead(A0));
  vddl = int(analogRead(A1));
  Serial.print("vddr== "); 
  Serial.print(vddr);
  Serial.println();
  Serial.print("vddl== "); 
  Serial.println(vddl);
  if(vddr > 323 && vddl <= 323){
      Sex(222,0,111,0);
  }else if(vddr <= 323 && vddl > 323){
      Sex(111,0,222,0);
  }else{
    Sex(111,0,111,0);
  }
  delay(10);
}