#include <Arduino.h>
void Sex(int a,int b,int c,int d){
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
  Sex(3,3,3,3);
}