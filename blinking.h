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
