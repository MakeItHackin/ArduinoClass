/*

 Space Apps 2018 Arduino Bootcamp
 Challenge 4a
  
 Fading using for loops - Alternate Method

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
    int x = 1;
    for (int i=0; i > -1; i = i+x){
      analogWrite(PWMpin, i);
      if (i==255){
        x = -1;
      }
      delay(10);
    }
}
