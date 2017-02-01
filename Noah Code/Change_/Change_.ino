#include <avr/io.h>
#include <avr/interrupt.h>
int x;
void setup(){
  pinMode(9, INPUT);
  PCICR = (1 << PCINT0);
}


void loop(){

}

ISR (PCINT0_vect){
  Serial.begin(9600);
  Serial.print ("change!");

}



