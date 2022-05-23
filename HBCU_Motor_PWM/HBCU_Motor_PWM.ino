/*
 * HBCU Workshop 2021
 * Written on 15th Sept, 2021
 * Activity: 9/21/2021
 * Coded by Cyril A.
 */
 //DC Motor PWM
 #define enA 10
 #define enB 11

int in1=3;
int in2=4;
int in3=5;
int in4=6;

#define trigPin 8 
#define echoPin 9 
#define ledPin 13


void setup() {
  // put your setup code here, to run once:
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

  //ultrasonic_sensor();
  long duration, distance;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2)/29.1;
  Serial.println(distance);
  
if (distance < 25){
  digitalWrite(ledPin,HIGH);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  //analogWrite(enA,0);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  //analogWrite(enB,0);
  delay(10);

  //Turning
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA,200);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,200);
  delay(350);
  analogWrite(enA,0);
  analogWrite(enB,0);
  delay(1000);

  
}
else{
  digitalWrite(ledPin,LOW);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA,90);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,90);
  delay(1);
}
  }

//void ultrasonic_sensor(){}
/*Reverse
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA,200);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,200);
  delay(50);
  */
