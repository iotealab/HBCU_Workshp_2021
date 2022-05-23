/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 * Courtesy: @blackinrobotics
 */

 //Button with resistor 1k - 10k 
 
int inputPin = 7;
#define pinLed 13
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Initialize Serial Monitor
 
  pinMode(inputPin,INPUT);
  pinMode(pinLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(inputPin);
   
  //Serial.print("Sensor or Input val: ");  
  Serial.println(buttonState);
   
  //Verifying the state using if conditional statement
  if (buttonState == 1) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed,LOW );
  }    
}
