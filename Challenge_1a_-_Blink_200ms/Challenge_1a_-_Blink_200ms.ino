/*
  Space Apps 2018 Arduino Bootcamp
  Challenge 1a
  Blink for 200 milliseconds
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for 200 milliseconds
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for 200 milliseconds
}
