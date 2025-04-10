// Made by: Charlotte Brisson 
//On April 10 2025
//servo circuit
//

#include <Servo.h>

Servo myservo;  

int potpin = 0;  
int val;    

void setup() {
  myservo.attach(9);  
}

void loop() {
  val = analogRead(potpin);          
  val = val/6;  
  myservo.write(val);                  
  delay(15);                           
}
