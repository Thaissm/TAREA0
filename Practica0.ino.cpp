#include <Arduino.h>
#line 1 "C:\\Users\\Thaís\\Documents\\Arduino\\HEX\\Practica0\\Practica0.ino"
# define verde    13
# define ver   10  
# define amarillo 12
# define amar  9
# define rojo     11
# define roj     8
#line 7 "C:\\Users\\Thaís\\Documents\\Arduino\\HEX\\Practica0\\Practica0.ino"
void setup();
#line 16 "C:\\Users\\Thaís\\Documents\\Arduino\\HEX\\Practica0\\Practica0.ino"
void loop();
#line 7 "C:\\Users\\Thaís\\Documents\\Arduino\\HEX\\Practica0\\Practica0.ino"
void setup() {
  pinMode (verde,OUTPUT); 
  pinMode (ver,OUTPUT);
  pinMode (amarillo,OUTPUT);
  pinMode (amar,OUTPUT); 
  pinMode (rojo,OUTPUT);
  pinMode (roj,OUTPUT);
}

void loop() {
     
  digitalWrite(roj,    true);
  digitalWrite(verde,   true);
  delay       (4000);
  
  digitalWrite(verde,    false);
  delay       (1000);
  digitalWrite(amarillo,true);
  delay       (1000);
   digitalWrite(amarillo,false);
  digitalWrite(rojo,    true);
  digitalWrite(roj,    false);
  digitalWrite(ver,    true);
  delay       (5000);
  
  digitalWrite(ver,    false);
  delay       (1000);
  digitalWrite(amar,true);
  delay       (1000);
  digitalWrite(amar,false);
  digitalWrite(roj,    true);
   digitalWrite(rojo,    false);
  digitalWrite(verde,    true);
 
   
  
}

