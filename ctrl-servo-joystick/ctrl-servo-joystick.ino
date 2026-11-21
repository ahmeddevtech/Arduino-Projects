#include<Servo.h>

int Xpin = A0;
int Xval;
Servo myServo;
int angle = 90;
int servoPin = A2;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  pinMode(Xpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(Xpin);
  angle = map(Xval, 0, 1023, 0, 180);
  myServo.write(angle);
  delay(50);
}
