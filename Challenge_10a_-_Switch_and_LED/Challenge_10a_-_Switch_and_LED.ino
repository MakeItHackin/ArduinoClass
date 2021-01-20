/*
 
 Space Apps 2018 Arduino Bootcamp
 Challenge 10a

 Turns on and off a light emitting diode(LED) connected to digital
 pin 5, when sliding a swich attached to pin 2.


 The circuit:
 * LED attached from pin 5 to ground
 * slide switch attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground


 */

// constants won't change. They're used here to
// set pin numbers:
const int SwitchPin = 2;     // the number of the pushbutton pin
const int LedPin =  5;      // the number of the LED pin

// variables will change:
int SwitchState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(LedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(SwitchPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  SwitchState = digitalRead(SwitchPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (SwitchState == HIGH) {
    // turn LED on:
    digitalWrite(LedPin, HIGH);
    Serial.println("Switch is ON - Turn on LED");
  } else {
    // turn LED off:
    digitalWrite(LedPin, LOW);
    Serial.println("Switch is OFF - Turn OFF LED");
  }
}
