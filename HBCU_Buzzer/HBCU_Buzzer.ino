/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 * Courtesy: @blackinrobotics
 */

 //Buzzer
 
int pinBuzzer = 6;
#define LED 13

void setup() {
  // put your setup code here, to run once:
 pinMode(pinBuzzer,OUTPUT);
 pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //LED ON
  digitalWrite(LED, HIGH);
  //Using frequency of 1500 hz.
  tone(pinBuzzer,1500);
  delay(1000); //One second
  
  //LED OFF
  digitalWrite(LED,LOW );
  //Buzzer OFF
  noTone(pinBuzzer);
  delay(1000); //One second
}
