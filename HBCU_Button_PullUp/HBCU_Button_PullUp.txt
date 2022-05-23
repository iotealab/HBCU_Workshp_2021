/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 * Courtesy: @blackinrobotics
 */

 //Button PullUp - No resistor
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonVal = digitalRead(2);
  Serial.println(buttonVal);
  if (buttonVal == HIGH){
  digitalWrite(13,LOW);
  }
  else {
    digitalWrite(13, HIGH);
  }
}
