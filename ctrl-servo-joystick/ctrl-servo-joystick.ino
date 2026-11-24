#include<Servo.h>

int Xpin = A0;
int Xval;
int btnPin = 2;
int btnVal;
int btnValOld;
Servo myServo;
int angle = 90;
int servoPin = A2;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  pinMode(Xpin, INPUT);
  pinMode(btnPin, INPUT_PULLUP);
  digitalWrite(btnPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval = analogRead(Xpin);
  btnVal = digitalRead(btnPin);
  angle = map(Xval, 0, 1023, 0, 180);
  myServo.write(angle);
  delay(50);
}
