/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */

 //Potentiometer
 

int POT = A0;
int LEDpin = 11; //PWM ~0-255
int POTval = 0;

void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop()
{
  POTval = analogRead(POT);
  Serial.println(POTval);
  POTval =map(POTval,0, 1023, 0, 255);
  analogWrite(LEDpin,POTval);
  
}
