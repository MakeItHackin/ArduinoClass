/*
 
 Space Apps 2018 Arduino Bootcamp
 Challenge 11b
 
 Turns on and off a light emitting diode(LED) connected to digital
 pin 5, when sliding a swich attached to pin 2.

 Turns on and off a light emitting diode(LED) connected to digital
 pin 7, when pressing a pushbutton attached to pin 3.

 The circuit:
 * LED attached from pin 5 to ground
 * slide switch attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * LED attached from pin 7 to ground
 * pushbutton attached to pin 3 from +5V
 * 10K resistor attached to pin 3 from ground
 * 
 */

// constants won't change. They're used here to
// set pin numbers:
const int SwitchPin = 2;     // the number of the pushbutton pin
const int SwitchLedPin =  5;      // the number of the LED pin

// variables will change:
int SwitchState = 0;         // variable for reading the pushbutton status

const int buttonPin = 3;     // the number of the pushbutton pin
const int ButtonLedPin =  7;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(SwitchLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(SwitchPin, INPUT);
    // initialize the LED pin as an output:
  pinMode(ButtonLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  SwitchState = digitalRead(SwitchPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (SwitchState == HIGH) {
    // turn LED on:
    digitalWrite(SwitchLedPin, HIGH);
    Serial.println("Switch is ON - Turn on LED");
  } else {
    // turn LED off:
    digitalWrite(SwitchLedPin, LOW);
    Serial.println("Switch is OFF - Turn OFF LED");
  }

    // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ButtonLedPin, HIGH);
    Serial.println("Button was pressed - Turn on LED");
  } else {
    // turn LED off:
    digitalWrite(ButtonLedPin, LOW);
    Serial.println("Button not pressed - Turn off LED");
  }
}
