/*   

  Space Apps 2018 Arduino Bootcamp
  Challenge 8a
  
  Light Sensor and LED
  Photocell simple testing sketch. 
 
  Connect one end of the photocell to 5V, the other end to Analog 0.
  Then connect one end of a 10K resistor from Analog 0 to ground 
  Connect LED from pin 11 through a resistor to ground 

*/
 
int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
int photocellReading;     // the analog reading from the sensor divider
int LEDpin = 11;          // connect Red LED to pin 11 (PWM pin)
int LEDbrightness;        // 
int brightnessOffset = 300; // 

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
}
 
void loop(void) {
  photocellReading = analogRead(photocellPin);  
 
  Serial.print("Analog reading = ");
  Serial.print(photocellReading);     // the raw analog reading
  Serial.print("   Brightness = ");
  Serial.println(LEDbrightness);     // the raw analog reading
   
  // LED gets brighter the darker it is at the sensor
  // that means we have to -invert- the reading from 0-1023 back to 1023-0
 // photocellReading = 1023 - photocellReading;
  //now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
  //LEDbrightness = map(photocellReading, 0, 1023, 0, 255); // not using offset
  LEDbrightness = map(photocellReading, brightnessOffset, 1023, 0, 255);
  if (LEDbrightness < 0) {
    LEDbrightness = 0;
  }
  analogWrite(LEDpin, LEDbrightness);
 
  delay(100);
}
