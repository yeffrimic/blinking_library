/*
 * Library created by Yeffri J. Salazar, Najt Labs Guatemala
 * This library will blink a led without delay, so you can 
 * write more code and the blink will blink when interval
 * has passed
 */

#include "blinking.h"

Blinking::Blinking(int pin)
{
_pin = pin;
pinMode(_pin,OUTPUT);
ledState=LOW;
}

void Blinking::blinker(int delaytime)
{
 unsigned long currentMillis = millis();

  if (currentMillis - prevmillis >= delaytime) {
    // save the last time you blinked the LED
    prevmillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(_pin, ledState);
  }

}
