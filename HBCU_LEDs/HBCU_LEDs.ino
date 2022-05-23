/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */
 
 //LEDs
 int ledPin = 13;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  Serial.println("Blinking LEDs every one second");
 
    digitalWrite(ledPin,HIGH);
    Serial.println("ON");
    delay(1000);

    digitalWrite(ledPin,LOW);
    Serial.println("OFF");
    delay(1000);
}
