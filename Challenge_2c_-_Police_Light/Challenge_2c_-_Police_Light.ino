/*
  Space Apps 2018 Arduino Bootcamp
  
  Challenge 2c
  
  Police Light Blinking.  Blue LED on pin 12.  Red LED on pin 13.
  
 */

int BlinkRate = 150;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 12 and 13 as an output.
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(BlinkRate);              // wait for the Blink Rate
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(BlinkRate);              // wait for the Blink Rate 
}
