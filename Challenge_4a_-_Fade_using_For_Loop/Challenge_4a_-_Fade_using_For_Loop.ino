/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 4a
  
 Fading using for loops

 This example shows how to fade an LED on pin 9 
 using the analogWrite() function.

 */
 
int PWMpin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(PWMpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    for (int i=0; i <= 255; i++){
      analogWrite(PWMpin, i);
      delay(10);
    }
    for (int i=255; i >= 0; i--){
      analogWrite(PWMpin, i);
      delay(10);
    }     
}
