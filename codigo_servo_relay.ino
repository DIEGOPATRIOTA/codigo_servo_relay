/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

//inclusão de biblioteca
#include <Servo.h>

//Variáveis
int pos = 0;    
Servo myservo;
int servoPin = 3;
int Relay1 = 7; // relay 01

void setup()
{
  
Serial.begin(9600);
// RELAYS - LÂMPADA
pinMode(Relay1, OUTPUT);     //Set Pin12 as output
myservo.attach(servoPin); 
}

void loop(){
 
  for(pos = 0; pos < 90; pos++){
    myservo.write(pos);
    delay(30);
  }

  digitalWrite(Relay1, LOW);
  
  delay(2000);

  for(pos = 90; pos > 0; pos--){
    myservo.write(pos);
    delay(30);
  }

  digitalWrite(Relay1, HIGH);
}

