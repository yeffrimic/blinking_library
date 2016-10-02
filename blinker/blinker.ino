/*
 * Library created by Yeffri J. Salazar, Najt Labs Guatemala
 * This library will blink a led without delay, so you can 
 * write more code and the blink will blink when interval
 * has passed
 */

#include <blinking.h>// adding the library
Blinking led(13);// send ledpin in parentheses
void setup() {
  //this is not necessary

}

void loop() {
  // put your main code here, to run repeatedly:
  led.blinker(500);//send time in parentheses
}
