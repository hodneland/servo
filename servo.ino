#include <Servo.h>
int servoPin = 9;
int servoPos = 0;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
pinMode(servoPin, OUTPUT);
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(servoPos);
}
