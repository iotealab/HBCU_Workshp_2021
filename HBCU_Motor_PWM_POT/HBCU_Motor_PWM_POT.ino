/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */
 //DC Motor PWM
 #define enA 10
 #define enB 11
 
int POT = A0;
int POTval = 0;

int in1=3;
int in2=4;
int in3=5;
int in4=6;

#define trigPin 8 
#define echoPin 9 
#define ledPin 13


void setup() {
  // put your setup code here, to run once:
  pinMode(POT, INPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

   Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  //Signal light
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  POTval = analogRead(POT);
  Serial.println(POTval);
  POTval =map(POTval,0, 1023, 0, 255);
  analogWrite(ledPin,POTval);
  //Increasing forward speed
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA,POTval);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,POTval);
  delay(1);
  
  int distance;
  }
