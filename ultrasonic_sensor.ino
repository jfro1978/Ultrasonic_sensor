//Arduino code for control of the HC SR04 ultrasonic sensor

int trig = 7;
int echo = 8;

void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT)  

}

void loop() 
{
  digitalWrite(trig,0);
  delayMicroseconds(2);

  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);

}
