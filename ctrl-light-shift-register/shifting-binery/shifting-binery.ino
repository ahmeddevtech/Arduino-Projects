/*       Serial-to-Parallel 8 Bit Shift Register (SN74HC595N)     */

int clockPin = 8; // SH-CP  - Shift Register -
int latchPin = 11; // ST-CP  - Storage Register - (latch pin)
int dataPin = 12; // DS  - Serial Data Input -

byte LEDs = 0b00000101;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // shift to the right : 
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);
  delay(delayTime);
  LEDs *= 2;

  // shift to the left : 

  // digitalWrite(latchPin, LOW);
  // shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  // digitalWrite(latchPin, HIGH);
  // delay(delayTime);
  // LEDs /= 2;
  
}