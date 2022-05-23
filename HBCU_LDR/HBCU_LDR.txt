/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */

 //Photo resistor
 
//100k resistor act as a voltage divider to A0

int LDRpin = A0;
int LEDpin = 13;
int LDRval = 0;

void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(LDRpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  LDRval = analogRead(LDRpin);
  Serial.println(LDRval);
  
  if (LDRval < 50){ //Tentative val.
  digitalWrite(LEDpin, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  }
  else {
  digitalWrite(LEDpin, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  }
}
