#include <Servo.h>

Servo s1;
int pt = A0;
 

void setup() {
pinMode(pt, INPUT);
s1.attach(3);
}

void loop() {
 
s1.write(map((analogRead(pt)) ,0,1023,0,180)); 
 




}
