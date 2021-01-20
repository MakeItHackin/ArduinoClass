/*
  Space Apps 2018 Arduino Bootcamp
  Challenge 6a
  
  Plays a tone

  circuit:
  - 8 ohm speaker on digital pin 8

*/

int delayTime = 1000; // delay time in milliseconds

void setup() {
 // nothing intially needed
}

void loop() {
    // play a note on pin 8
  tone(8, 80);
  delay(delayTime);
  noTone(8);
  delay(delayTime);

}
