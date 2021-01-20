/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 13a

 Control a micro servo on Arduino

 Micro servo signal pin hooked up to Arduino pin 11
 Ground pin to Arduino GND
 VCC pin to Arduino 5V 

 */
 
 #include <Servo.h>

Servo myservo; // create servo object to control a servo
// twelve servo objects can be created on most boards

int input;

void setup()
{
  myservo.attach(11); // attaches the servo on pin 11 to the servo object
  Serial.begin(9600);
  myservo.write(75);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.parseInt();
    if (input > 0){
    myservo.write(input);
    Serial.println(input);
    delay (100);
    }
  }
}
