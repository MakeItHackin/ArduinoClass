/*

  Space Apps 2018 Arduino Bootcamp
  Challenge 9b
  
  Ping Piano
    
  This sketch reads a PING))) ultrasonic rangefinder and ret
  urns the
  distance to the closest object in range. To do this, it sends a pulse
  to the sensor to initiate a reading, then listens for a pulse
  to return. The length of the returning pulse is proportional to
  the distance of the object from the sensor.
  
  The circuit:
  * +V connection of the PING))) attached to +5V
  * GND connection of the PING))) attached to ground

*/

// Pin number constants
const int triggerPin = 11;
const int echoPin = 12;
const int speakerPin = 8;

void playTone(int tone, int duration) {
for (long i = 0; i < duration * 1000L; i += tone * 2) {
digitalWrite(speakerPin, HIGH);
delayMicroseconds(tone);
digitalWrite(speakerPin, LOW);
delayMicroseconds(tone);
}
}

void playNote(char note, int duration) {
char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

// play the tone corresponding to the note name
for (int i = 0; i < 8; i++) {
if (names[i] == note) {
playTone(tones[i], duration);
}
}
}

void setup() {
// initialize serial communication:
Serial.begin(9600);
pinMode(speakerPin, OUTPUT);
}

void loop()
{
long duration, cm;

// The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
// Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(5);
digitalWrite(triggerPin, LOW);

// The echo pin is used to read the signal from the PING))): a HIGH
// pulse whose duration is the time (in microseconds) from the sending
// of the ping to the reception of its echo off of an object.
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);

// convert the time into a distance
cm = microsecondsToCentimeters(duration);

Serial.print(cm);
Serial.print("cm");
Serial.println();

if ( cm > 100){
delay (300);
}else if (cm >60){
playNote('d', 300);
}else if (cm >50){
playNote('e', 300);
}else if (cm >40){
playNote('f', 300);
}else if (cm >30){
playNote('g', 300);
}else if (cm >20){
playNote('a', 300);
}else if (cm >10){
playNote('b', 300);
}else {
playNote('C', 300);
}

delay (200);
}
long microsecondsToCentimeters(long microseconds)
{
// The speed of sound is 340 m/s or 29 microseconds per centimeter.
// The ping travels out and back, so to find the distance of the
// object we take half of the distance travelled.
return microseconds / 29 / 2;
}
