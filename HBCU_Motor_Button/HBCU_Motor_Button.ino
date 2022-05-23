/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */
 //DC Motor with Button-PullUp
 
 #define enA 10
 #define enB 11

int in1=3;
int in2=4;
int in3=5;
int in4=6;


#define ledPin 13


void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(2, INPUT_PULLUP);

   Serial.begin(9600);
  
  //Signal light
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonVal = digitalRead(2);
  Serial.println(buttonVal);
  if (buttonVal == HIGH){
  digitalWrite(13,LOW);
  //digitalWrite(ledPin,LOW);

  //Forward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA,90);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,90);
  delay(1);
  }
  else {
    digitalWrite(13, HIGH);
    digitalWrite(ledPin,HIGH);
  //Stop Briefly
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  //analogWrite(enA,0);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  //analogWrite(enB,0);
  delay(10);

  //Reverse
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA,200);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,200);
  delay(350);
  analogWrite(enA,0);
  analogWrite(enB,0);
  delay(1000);
  }
}
  
