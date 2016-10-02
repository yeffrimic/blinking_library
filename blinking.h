/*
 * Library created by Yeffri J. Salazar, Najt Labs Guatemala
 * This library will blink a led without delay, so you can 
 * write more code and the blink will blink when interval
 * has passed
 */

#ifndef Blinking_h
#define Blinking_h
#include <Arduino.h>

class Blinking
{
	public:
		Blinking(int pin);
		void blinker(int delaytime);
	private:
		int _pin;
		unsigned long prevmillis;
		boolean ledState;


};
#endif
