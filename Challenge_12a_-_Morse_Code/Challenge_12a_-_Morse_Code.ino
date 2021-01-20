/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 12a

 Turns on and off a light emitting diode(LED) connected to digital
 pin 7, when pressing a pushbutton attached to pin 3.
 Piezo buzzer hooked up to pin 8.


 The circuit:
 * LED attached from pin 7 to ground
 * pushbutton attached to pin 3 from +5V
 * 10K resistor attached to pin 3 from ground

 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 3;     // the number of the pushbutton pin
const int ButtonLedPin =  7;      // the number of the LED pin
const int piezoPin = 9;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

//int delayTime = 100; // delay time in milliseconds

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ButtonLedPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  noTone(piezoPin);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ButtonLedPin, HIGH);
    Serial.println("Button was pressed - Turn on LED");
    tone(piezoPin, 80);
   // delay(delayTime);
  } else {
    // turn LED off:
    digitalWrite(ButtonLedPin, LOW);
    Serial.println("Button not pressed - Turn off LED");
    noTone(piezoPin);
  }
}
