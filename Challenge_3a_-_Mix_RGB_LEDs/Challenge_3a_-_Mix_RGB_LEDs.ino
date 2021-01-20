/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 3a
  
 Mix Colors by varying brightness on R,G,B LEDs


 */

int redPin = 5;
int greenPin = 6;
int bluePin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  analogWrite(redPin, 255);
  analogWrite (greenPin, 255);
  analogWrite (bluePin, 255);
}

