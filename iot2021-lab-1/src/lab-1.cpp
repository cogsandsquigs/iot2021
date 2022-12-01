/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/ianp/Documents/iot2021/labs/lab-1/src/lab-1.ino"
// this is the lab for lab 1, hello world
// LED at pin D5 blinks at a freq. of 1hz

void setup();
void loop();
#line 4 "/home/ianp/Documents/iot2021/labs/lab-1/src/lab-1.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
	pinMode(D5, OUTPUT);
}

void loop()
{
	digitalWrite(D5, HIGH);
	delay(1000);
	digitalWrite(D5, LOW);
	delay(1000);
}