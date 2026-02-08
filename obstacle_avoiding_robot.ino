### Arduino Code



\#define trigPin 9

\#define echoPin 10

\#define motor1A 5

\#define motor1B 6

\#define motor2A 7

\#define motor2B 8

void setup() {

&nbsp;pinMode(trigPin, OUTPUT);

&nbsp;pinMode(echoPin, INPUT);

&nbsp;pinMode(motor1A, OUTPUT);

&nbsp;pinMode(motor1B, OUTPUT);

&nbsp;pinMode(motor2A, OUTPUT);

&nbsp;pinMode(motor2B, OUTPUT);

&nbsp;Serial.begin(9600);

}

long getDistance() {

&nbsp;digitalWrite(trigPin, LOW);

&nbsp;delayMicroseconds(2);

&nbsp;digitalWrite(trigPin, HIGH);

&nbsp;delayMicroseconds(10);

&nbsp;digitalWrite(trigPin, LOW);

&nbsp;long duration = pulseIn(echoPin, HIGH);

&nbsp;return duration \* 0.034 / 2;

}

void loop() {

&nbsp;long distance = getDistance();

&nbsp;if (distance < 15) {

&nbsp;stopRobot();

&nbsp;turnLeft();

&nbsp;} else {

&nbsp;moveForward();

&nbsp;}

}



