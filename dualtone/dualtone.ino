/*
  
  Dualtone by Igor Ramos 2-15-2014  
  
  code based based on: Arduino keyboard demo code
  
  keyboard
 
 Plays a pitch that changes based on a changing analog input
 
 circuit:
 * 3 force-sensing resistors from +5V to analog in 0 through 5
 * 3 10K resistors from analog in 0 through 5 to ground
 * 8-ohm speaker on digital pin 8
 
 created 21 Jan 2010
 modified 9 Apr 2012
 by Tom Igoe 

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone3
 
 */

#include "pitches.h"

const int threshold = 10;    // minimum reading of the sensors that generates a note

// notes to play, corresponding to the 3 sensors:
int notes[] = {
  NOTE_A4, NOTE_B4,NOTE_C3 };

void setup() {

}

void loop() {
  tone(8, notes[0]);
  delay(400);   
  noTone(8);
  delay(150); 
  
  tone(9, notes[1]);f
  delay(400);   noTone(9);
  delay(150); 
}
