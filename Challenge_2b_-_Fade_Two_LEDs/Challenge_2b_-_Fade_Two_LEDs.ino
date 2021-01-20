/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 2b
  
 Fade two LEDs, alternating effect

 This example shows how to fade an LED on pin 9 and 10
 using the analogWrite() function.

 */

int led1 = 9;           // the PWM pin the LED 1 is attached to
int led2 = 10;           // the PWM pin the LED 2 is attached to

int brightness1 = 0;    // how bright the LED 1 is
int brightness2 = 255;    // how bright the LED 2 is

int fadeAmount1 = 5;    // how many points to fade the LEDs by
int fadeAmount2 = 5;    // how many points to fade the LEDs by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 and 10 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led1, brightness1);
  analogWrite(led2, brightness2);
  
  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount1;
  brightness2 = brightness2 - fadeAmount2;
  
  // reverse the direction of the fading at the ends of the fade:
  if (brightness1 <= 0 || brightness1 >= 255) {
    fadeAmount1 = -fadeAmount1;
  }
  if (brightness2 <= 0 || brightness2 >= 255) {
    fadeAmount2 = -fadeAmount2;
  }
  
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
