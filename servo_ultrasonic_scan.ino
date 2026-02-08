### Arduino Code for SG90 Servo Motor

\#include <Servo.h>

\#define trigPin 9

\#define echoPin 10

\#define motor1A 5

\#define motor1B 6

\#define motor2A 7

\#define motor2B 8

\#define servoPin 3

Servo myServo;

void setup() {

&nbsp;pinMode(trigPin, OUTPUT);

&nbsp;pinMode(echoPin, INPUT);

&nbsp;pinMode(motor1A, OUTPUT);

&nbsp;pinMode(motor1B, OUTPUT);

&nbsp;pinMode(motor2A, OUTPUT);

&nbsp;pinMode(motor2B, OUTPUT);

&nbsp;myServo.attach(servoPin);

&nbsp;Serial.begin(9600);

}

void loop() {

&nbsp;myServo.write(90);

&nbsp;delay(500);

&nbsp;long distance = getDistance();

&nbsp;if (distance < 15) {

&nbsp;myServo.write(0);

&nbsp;delay(500);

&nbsp;long leftDist = getDistance();

&nbsp;myServo.write(180);

&nbsp;delay(500);

&nbsp;long rightDist = getDistance();

&nbsp;if (leftDist > rightDist) turnLeft();

&nbsp;else turnRight();

&nbsp;} else {

&nbsp;moveForward();

&nbsp;}

}



